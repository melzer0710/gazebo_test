from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, RegisterEventHandler, SetEnvironmentVariable, TimerAction
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration, Command, PathJoinSubstitution, FindExecutable, EnvironmentVariable
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.event_handlers import OnProcessStart
from ament_index_python.packages import get_package_share_directory
from moveit_configs_utils import MoveItConfigsBuilder
import os

def generate_launch_description():
    ld = LaunchDescription()

    # 1. URDF GENERIERUNG
    sim_pkg_path = get_package_share_directory("ur10e_gazebo_sim")
    
    # Pfad zur Xacro (die Datei, die mit grep funktioniert hat!)
    xacro_file_path = os.path.join(sim_pkg_path, "urdf", "ur10e_ft_rg2.urdf.xacro")

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]), 
            " ", 
            xacro_file_path,
            " ",
            "name:=ur", 
            " ", 
            "ur_type:=ur10e",
            " ",
            "sim_gazebo:=true"
        ]
    )

    robot_description_param = {'robot_description': robot_description_content}

    # 2. MoveIt Config
    moveit_config = (
        MoveItConfigsBuilder("custom_robot", package_name="ur10e_ft_rg2_moveit_config")
        .robot_description_semantic(file_path="config/ur.srdf")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .robot_description_kinematics(file_path="config/kinematics.yaml")
        .planning_scene_monitor(
            publish_robot_description=False,
            publish_robot_description_semantic=True, 
            publish_planning_scene=True
        )
        .planning_pipelines(pipelines=["ompl", "chomp", "pilz_industrial_motion_planner"])
        .to_moveit_configs()
    )

    # 3. Gazebo Launch (WICHTIG: paused='false' probieren!)
    gazebo_launch_file = os.path.join(
        get_package_share_directory('gazebo_ros'), 'launch', 'gazebo.launch.py'
    )
    world_file = os.path.join(sim_pkg_path, 'worlds', 'world1.world')

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gazebo_launch_file),
        launch_arguments={
            'world': world_file, 
            'gui': 'true', 
            'paused': 'false' # <-- ÄNDERUNG: Physik sofort starten!
        }.items()
    )

    # 4. Robot State Publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description_param, {'use_sim_time': True}],
    )

    # 5. DER SPAWNER NODE (Wird später verzögert gestartet)
    spawn_the_robot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=[
            '-entity', 'cobot_delayed', 
            '-xml', robot_description_content,
            '-x', LaunchConfiguration('x'),
            '-y', LaunchConfiguration('y'),
            '-z', LaunchConfiguration('z')
        ],
        output='screen',
    )

    # 6. DER TIMING TRICK: Verzögertes Spawnen
    # Wir warten 10 Sekunden, bis Gazebo sicher bereit ist.
    delayed_spawn_action = TimerAction(
        period=10.0,
        actions=[spawn_the_robot]
    )

    # 7. Move Group Node
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[
            moveit_config.to_dict(), 
            {'use_sim_time': True},
            robot_description_param 
        ],
    )

    # RViz
    rviz_config_path = os.path.join(
        get_package_share_directory("ur10e_ft_rg2_moveit_config"), "config", "moveit.rviz",
    )
    
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        output="screen",
        arguments=["-d", rviz_config_path],
        parameters=[
            robot_description_param,
            moveit_config.robot_description_semantic,
            moveit_config.planning_pipelines,
            moveit_config.robot_description_kinematics,
            {'use_sim_time': True}
        ],
    )

    # Controllers
    joint_controllers_file = os.path.join(sim_pkg_path, 'config', 'ur10e_controllers_ft_rg2.yaml')
    
    controller_manager_node = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[robot_description_param, joint_controllers_file, {'use_sim_time': True}],
        output='screen',
        remappings=[("~/robot_description", "/robot_description")],
    )

    joint_state_broadcaster = Node(
        package="controller_manager", executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )
    
    arm_controller = Node(
        package="controller_manager", executable="spawner",
        arguments=["joint_trajectory_controller", "--controller-manager", "/controller_manager"],
    )

    gripper_controller = Node(
        package="controller_manager", executable="spawner",
        arguments=["gripper_position_controller", "--controller-manager", "/controller_manager"],
    )

    # Event Handlers
    delay_joint_broadcaster = RegisterEventHandler(
        OnProcessStart(target_action=controller_manager_node, on_start=[joint_state_broadcaster])
    )

    delay_controllers = RegisterEventHandler(
        OnProcessStart(target_action=joint_state_broadcaster, on_start=[arm_controller, gripper_controller, move_group_node])
    )
    
    delay_rviz = RegisterEventHandler(
        OnProcessStart(target_action=robot_state_publisher, on_start=[rviz_node])
    )

    # Env Vars
    realsense_path = PathJoinSubstitution([FindPackageShare("realsense2_description"), ""])
    ur_model_path = os.path.join(sim_pkg_path, "models")
    
    env_var = SetEnvironmentVariable(
        name="GAZEBO_MODEL_PATH",
        value=[EnvironmentVariable("GAZEBO_MODEL_PATH", default_value=""), ":", realsense_path, ":", ur_model_path]
    )

    ld.add_action(DeclareLaunchArgument('x', default_value='0'))
    ld.add_action(DeclareLaunchArgument('y', default_value='0'))
    ld.add_action(DeclareLaunchArgument('z', default_value='0'))
    
    ld.add_action(env_var)
    ld.add_action(gazebo)
    ld.add_action(robot_state_publisher)
    
    # WICHTIG: Hier rufen wir nicht spawn_the_robot auf, sondern die VERZÖGERUNG!
    ld.add_action(delayed_spawn_action) 
    
    ld.add_action(controller_manager_node)
    ld.add_action(delay_joint_broadcaster)
    ld.add_action(delay_controllers)
    ld.add_action(delay_rviz)

    return ld