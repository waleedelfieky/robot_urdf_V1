cmake_minimum_required(VERSION 3.5)
project(robot_urdf)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)  # Add this line to find rclcpp
find_package(geometry_msgs REQUIRED)  # Add this line to find geometry_msgs

# Add the executable for your velocity publisher
add_executable(vel_pub src/vel_publicher.cpp)  # Use the correct path to your source file

# Link dependencies to the executable
ament_target_dependencies(vel_pub rclcpp geometry_msgs)

# Install the executable
install(TARGETS
  vel_pub
  DESTINATION lib/${PROJECT_NAME}
)

# Install other directories (unchanged)
install(DIRECTORY
  launch urdf config worlds
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

