from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, ExecuteProcess, RegisterEventHandler, SetEnvironmentVariable
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration, Command, EnvironmentVariable, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.event_handlers import OnProcessStart
from launch.event_handlers import OnProcessExit
from launch.events import TimerEvent
from launch.actions import TimerAction
from ament_index_python.packages import get_package_share_directory
import os
import xacro
from launch.event_handlers import OnProcessStart
from moveit_configs_utils import MoveItConfigsBuilder

def generate_launch_description():
    ld = LaunchDescription()


    joint_controllers_file = os.path.join(
        get_package_share_directory('ur10e_gazebo_sim'), 'config', 'ur10e_controllers_ft_rg2.yaml'
    )
    gazebo_launch_file = os.path.join(
        get_package_share_directory('gazebo_ros'), 'launch', 'gazebo.launch.py'
    )
    # world_file = os.path.join(
    #     get_package_share_directory('ur10e_gazebo_sim'), 'worlds', 'world1.world'
    # )

    moveit_config = (
        MoveItConfigsBuilder("custom_robot", package_name="ur10e_ft_rg2_moveit_config")
        .robot_description(file_path="config/ur.urdf.xacro")
        .robot_description_semantic(file_path="config/ur.srdf")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .robot_description_kinematics(file_path="config/kinematics.yaml")
        .planning_scene_monitor(
            publish_robot_description= True, publish_robot_description_semantic=True, publish_planning_scene=True
        )
        .planning_pipelines(
            pipelines=["ompl", "chomp", "pilz_industrial_motion_planner"]
        )
        .to_moveit_configs()
    )


    x_arg = DeclareLaunchArgument('x', default_value='0', description='X position of the robot')
    y_arg = DeclareLaunchArgument('y', default_value='0', description='Y position of the robot')
    z_arg = DeclareLaunchArgument('z', default_value='0', description='Z position of the robot')

    # Include Gazebo launch file
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gazebo_launch_file),
        launch_arguments={
            'use_sim_time': 'true',
            'debug': 'false',
            'gui': 'true',
            'paused': 'true',
            #'world' : world_file
        }.items()
    )

    rviz_config_path = os.path.join(
        get_package_share_directory("ur10e_ft_rg2_moveit_config"),
        "config",
        "moveit.rviz",
    )

    setup_matteo_path = os.path.join(
        get_package_share_directory('ur10e_gazebo_sim'), 
        'models', 
        'setup_matteo', 
        'model.sdf' 
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", rviz_config_path],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.planning_pipelines,
            moveit_config.robot_description_kinematics,
        ],
    )

    # spawn the robot
    spawn_the_robot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=[
            '-entity', 'cobot',
            '-topic', 'robot_description',
            '-x', LaunchConfiguration('x'),
            '-y', LaunchConfiguration('y'),
            '-z', LaunchConfiguration('z')
        ],
        output='screen',
    )

    spawn_setup_matteo = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='spawn_setup_matteo',
        arguments=[
            '-entity', 'setup_matteo',      # Name in Gazebo
            '-file', setup_matteo_path,     # Pfad zur Datei
            '-x', '0.0',                    # X-Position (relativ zum World-Frame)
            '-y', '1.317',                    # Y-Position
            '-z', '0.0',                    # Z-Position
            '-Y', '0.0'                     # Rotation (Yaw) in Radiant
        ],
        output='screen',
    )

    # controller manager
    controller_manager_node = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[moveit_config.robot_description, joint_controllers_file],
        output='screen',
        remappings=[
            ("~/robot_description", "/robot_description"),
        ],
    )

    # Robot state publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[moveit_config.robot_description],
        output='screen'
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
        output="screen",
    )

    arm_trajectory_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_trajectory_controller", "--controller-manager", "/controller_manager"],
        output="screen",
    )

    gripper_position_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["gripper_position_controller", "--controller-manager", "/controller_manager"],
        output="screen",
    )

    use_sim_time={"use_sim_time": True}
    config_dict = moveit_config.to_dict()
    config_dict.update(use_sim_time)

    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[config_dict],
        arguments=["--ros-args", "--log-level", "info"],
    )


    delay_joint_state_broadcaster = RegisterEventHandler(
        OnProcessStart(
            target_action=controller_manager_node,
            on_start=[joint_state_broadcaster_spawner],
        )
    )

    delay_arm_controller = RegisterEventHandler(
        OnProcessStart(
            target_action=joint_state_broadcaster_spawner,
            on_start=[arm_trajectory_controller_spawner],
        )
    )

    delay_gripper_controller = RegisterEventHandler(
        OnProcessStart(
            target_action=joint_state_broadcaster_spawner,
            on_start=[gripper_position_controller_spawner],
        )
    )

    delay_rviz_node = RegisterEventHandler(
        OnProcessStart(
            target_action=robot_state_publisher,
            on_start=[rviz_node],
        )
    )

    delay_move_group_node = RegisterEventHandler(
        OnProcessStart(
            target_action=arm_trajectory_controller_spawner, # Oder gripper_position_controller_spawner
            on_start=[move_group_node],
        )
    )

    # Setze den GAZEBO_MODEL_PATH für RealSense
    realsense_model_path = PathJoinSubstitution(
        [FindPackageShare("realsense2_description"), ""]
    )
    ur_model_path = os.path.join(
        get_package_share_directory("ur10e_gazebo_sim"), "models"
    )
    ld.add_action(
        SetEnvironmentVariable(
            name="GAZEBO_MODEL_PATH",
            # Füge den neuen Pfad dem bestehenden GAZEBO_MODEL_PATH hinzu
            value=[
                EnvironmentVariable("GAZEBO_MODEL_PATH", default_value=""),
                ":",
                realsense_model_path,
                ":",
                ur_model_path
            ]
        )
    )


    # Launch Description
    ld.add_action(x_arg)
    ld.add_action(y_arg)
    ld.add_action(z_arg)
    ld.add_action(gazebo)
    ld.add_action(controller_manager_node)  # has to be loaded first
    ld.add_action(spawn_the_robot)
    ld.add_action(spawn_setup_matteo)
    ld.add_action(robot_state_publisher)
    # delay of the controllers
    ld.add_action(delay_move_group_node)
    ld.add_action(delay_joint_state_broadcaster)
    ld.add_action(delay_arm_controller)
    ld.add_action(delay_gripper_controller)
    ld.add_action(delay_rviz_node)



    return ld