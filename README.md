# Robot Velocity Publisher Assigment ROS2

## Table of Contents:

- [overview-of-system](#overview-of-system)
- [ROS2_preparation](#ROS2_preparation)
- [Publicher_Node](#Publicher_Node)
- [video](#video)
- [Contact Information](#contact-information)

## overview-of-system:

This system aims to control a mobile robot in Gazebo using ROS 2 by sending movement commands through the cmd_vel topic. The cmd_vel topic is typically used to control the robot's linear and angular velocity, allowing it to navigate and move within the Gazebo simulation environment.

## ROS2_preparation:

after installing ros2 humble we need to do the following
- prepare enviroment 
  - create workspace
  - Source the workspace setup file
    - or add it to .bashrc   
- install dependencies 
which are (ros-humble-gazebo-ros-pkgs, ros-humble-joint-state-publisher-gui, ros-humble-joint-state-publisher, ros-humble-xacro)
by using 

`sudo apt install ros-humble-gazebo-ros-pkgs`
`sudo apt install ros-humble-joint-state-publisher-gui`
`sudo apt install ros-humble-joint-state-publisher`
`sudo apt install ros-humble-xacro`

- create a package
- clone repo
- change branch to ros2
- create file.cpp for the package inside src folder

## Publicher_Node:
This is a simple ROS 2 node that publishes velocity commands to the `/cmd_vel` topic, which is commonly used for controlling robots. The node publishes a `Twist` message at a fixed interval to control linear and angular velocities.

## Overview
- **Node Name**: `velocity_publisher`
- **Topic**: `/cmd_vel`
- **Message Type**: `geometry_msgs::msg::Twist`
- **Publishing Interval**: 1 second
- **Linear Velocity**: 1 m/s (move forward)
- **Angular Velocity**: 1 rad/s (rotate around the z-axis)

## Code Explanation
- The node is named `"velocity_publisher"`.
- A publisher is created for the `/cmd_vel` topic with a queue size of 10.
- A timer triggers the `publish_velocity` method every second.
- The `publish_velocity` method:
  - Creates a `Twist` message.
  - Sets linear velocity on the x-axis to `1.0` (moving forward).
  - Sets angular velocity on the z-axis to `1.0` (rotating).
  - Publishes the message and logs the linear and angular velocities.

## How to Run

1. Ensure you have ROS 2 installed (e.g., Foxy, Galactic, or Humble).
2. Create a ROS 2 package and place the code in the `src` directory.
3. Build the package using:
   ```bash
   colcon build


## video for the final output:



https://github.com/user-attachments/assets/73bda367-107b-4726-bd6f-662c837602b8




## Contact Information:

If you have any questions, suggestions, or feedback regarding these this project, please feel free to contact me at waleedelfieky@gmail.com

