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



## video for the final output:


## Contact Information:

If you have any questions, suggestions, or feedback regarding these this project, please feel free to contact me at waleedelfieky@gmail.com

