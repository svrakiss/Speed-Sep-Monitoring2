cmake_minimum_required(VERSION 3.5)
project(object_analytics_msgs)
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
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(rosidl_typesupport_c REQUIRED)
find_package(rosidl_typesupport_cpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package( class_loader REQUIRED)
find_package( console_bridge REQUIRED)
find_package( geometry_msgs REQUIRED)
find_package( object_msgs REQUIRED)
find_package( rclcpp REQUIRED)
find_package( rcutils REQUIRED)
find_package( sensor_msgs REQUIRED)
find_package( std_msgs REQUIRED)
include_directories("C:/Program Files/MATLAB/R2020a/extern/include")
include_directories("C:/Program Files/MATLAB/R2020a/extern/include/MatlabDataArray")
include_directories("C:/Program Files/MATLAB/R2020a/toolbox/ros/include/ros2")
include_directories("include/object_analytics_msgs")
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set(msg_files
  "msg/MovingObject.msg"
  "msg/MovingObjectsInFrame.msg"
  "msg/ObjectInBox3D.msg"
  "msg/ObjectsInBoxes3D.msg"
  "msg/TrackedObject.msg"
  "msg/TrackedObjects.msg"
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
)
link_directories("C:/Program Files/MATLAB/R2020a/extern/lib/win64/microsoft")
# Library
add_library(
    object_analytics_msgs_matlab 
    SHARED
    src/object_analytics_msgs_MovingObject_common.cpp
    src/object_analytics_msgs_msg_MovingObject_publisher.cpp
    src/object_analytics_msgs_msg_MovingObject_subscriber.cpp
    src/object_analytics_msgs_MovingObjectsInFrame_common.cpp
    src/object_analytics_msgs_msg_MovingObjectsInFrame_publisher.cpp
    src/object_analytics_msgs_msg_MovingObjectsInFrame_subscriber.cpp
    src/object_analytics_msgs_ObjectInBox3D_common.cpp
    src/object_analytics_msgs_msg_ObjectInBox3D_publisher.cpp
    src/object_analytics_msgs_msg_ObjectInBox3D_subscriber.cpp
    src/object_analytics_msgs_ObjectsInBoxes3D_common.cpp
    src/object_analytics_msgs_msg_ObjectsInBoxes3D_publisher.cpp
    src/object_analytics_msgs_msg_ObjectsInBoxes3D_subscriber.cpp
    src/object_analytics_msgs_TrackedObject_common.cpp
    src/object_analytics_msgs_msg_TrackedObject_publisher.cpp
    src/object_analytics_msgs_msg_TrackedObject_subscriber.cpp
    src/object_analytics_msgs_TrackedObjects_common.cpp
    src/object_analytics_msgs_msg_TrackedObjects_publisher.cpp
    src/object_analytics_msgs_msg_TrackedObjects_subscriber.cpp
)
target_include_directories(object_analytics_msgs_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( object_analytics_msgs_matlab
	libMatlabDataArray
	)
ament_target_dependencies(
  object_analytics_msgs_matlab
  "class_loader"
  "console_bridge"
  "geometry_msgs"
  "object_msgs"
  "rclcpp"
  "rcutils"
  "sensor_msgs"
  "std_msgs"
)
rosidl_target_interfaces(
	  object_analytics_msgs_matlab
      ${PROJECT_NAME} "rosidl_typesupport_cpp")
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(object_analytics_msgs_matlab PRIVATE "OBJECT_ANALYTICS_MSGS_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS object_analytics_msgs_matlab
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install (DIRECTORY m/ DESTINATION m/+ros/+internal/+ros2/+custommessages FILES_MATCHING PATTERN "*.m")
ament_export_include_directories(
  include
)
ament_export_libraries(
  object_analytics_msgs_matlab
)
ament_package()
# Generated 21-Mar-2020 05:10:49
# Copyright 2019 The MathWorks, Inc.
