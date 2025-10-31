# Inhalt
Diese Repo ist dafür da, einen ur10e Roboter, einen Onrobot FT Sensor und einem Onrobot RG2 Gripper in Moveit und Gazebo zu implementieren und simulieren zu können

## Voraussetzungen
- Betriebssystem: Ubuntu 22.04
- ROS 2 humble
- MoveIT
- Gazebo

## Setup
1. Klonen des Repositories
```bash
git clone https://github.com/melzer0710/gazebo_test.git
```
2. Nach dem Klonen
```bash
cd ~/gazebo_test
colcon build
source install/setup.bash
```
3. Installieren wichtiger packages
```bash
sudo apt install ros-humble-ros2-control
sudo apt install ros-humble-ros2-controllers
sudo apt install ros-humble-gripper-controllers
sudo apt install gazebo
sudo apt install ros-humble-gazebo-ros2-control
sudo apt install ros-humble-gazebo-ros-pkgs
sudo apt install ros-humble-xacro
sudo apt install ros-humble-rmw-cyclonedds-cpp
sudo apt install ros-humble-sensor-msgs
```

## Wichtige Befehle

### Build
```bash
# im Workspace-Root
colcon build --symlink-install
# danach
source install/setup.bash
```

### Launch / Start
```bash
# Launch-File für MoveIt-Config + Gazebo parallel
ros2 launch ur10e_gazebo_sim spawn_ur10e_ft_rg2_moveit.launch.py
# Folgender Befehl öffnet nur Rviz und Gazebo + erwatet danach eine Trajektorie-Eingabe/ Ziel-Koordinate
ros2 launch ur10e_gazebo_sim spawn_ur10e_control.launch.py
```

### Nodes / Runtime Debug
```bash
# laufende Nodes anzeigen
ros2 node list

# Topics / Services
ros2 topic list
ros2 service list

# Topic Nachrichten anschauen
ros2 topic echo /topic_name

# RQT Graph
rqt_graph
```
## Hinweise bei Problemen
Dieses Repo befindet sich noch im Aufbau und wird daher ständig angepasst

### Kontakt
Bei Fragen an: matteo.melzer@web.de