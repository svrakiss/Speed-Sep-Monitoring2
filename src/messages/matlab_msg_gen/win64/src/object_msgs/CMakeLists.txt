cmake_minimum_required(VERSION 3.5)
project(object_msgs)
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
find_package( rclcpp REQUIRED)
find_package( rcutils REQUIRED)
find_package( sensor_msgs REQUIRED)
find_package( std_msgs REQUIRED)
include_directories("C:/Program Files/MATLAB/R2020a/extern/include")
include_directories("C:/Program Files/MATLAB/R2020a/extern/include/MatlabDataArray")
include_directories("C:/Program Files/MATLAB/R2020a/toolbox/ros/include/ros2")
include_directories("include/object_msgs")
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set(msg_files
  "msg/AgeGender.msg"
  "msg/AgeGenderStamped.msg"
  "msg/Emotion.msg"
  "msg/EmotionsStamped.msg"
  "msg/HeadPose.msg"
  "msg/HeadPoseStamped.msg"
  "msg/Landmark.msg"
  "msg/LandmarkStamped.msg"
  "msg/LicensePlate.msg"
  "msg/LicensePlateStamped.msg"
  "msg/Object.msg"
  "msg/ObjectInBox.msg"
  "msg/ObjectInBox3D.msg"
  "msg/ObjectInMask.msg"
  "msg/Objects.msg"
  "msg/ObjectsInBoxes.msg"
  "msg/ObjectsInBoxes3D.msg"
  "msg/ObjectsInMasks.msg"
  "msg/PerfValue.msg"
  "msg/PersonAttribute.msg"
  "msg/PersonAttributeStamped.msg"
  "msg/PersonsStamped.msg"
  "msg/Reidentification.msg"
  "msg/ReidentificationStamped.msg"
  "msg/VehicleAttribs.msg"
  "msg/VehicleAttribsStamped.msg"
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
)
link_directories("C:/Program Files/MATLAB/R2020a/extern/lib/win64/microsoft")
# Library
add_library(
    object_msgs_matlab 
    SHARED
    src/object_msgs_AgeGender_common.cpp
    src/object_msgs_msg_AgeGender_publisher.cpp
    src/object_msgs_msg_AgeGender_subscriber.cpp
    src/object_msgs_AgeGenderStamped_common.cpp
    src/object_msgs_msg_AgeGenderStamped_publisher.cpp
    src/object_msgs_msg_AgeGenderStamped_subscriber.cpp
    src/object_msgs_Emotion_common.cpp
    src/object_msgs_msg_Emotion_publisher.cpp
    src/object_msgs_msg_Emotion_subscriber.cpp
    src/object_msgs_EmotionsStamped_common.cpp
    src/object_msgs_msg_EmotionsStamped_publisher.cpp
    src/object_msgs_msg_EmotionsStamped_subscriber.cpp
    src/object_msgs_HeadPose_common.cpp
    src/object_msgs_msg_HeadPose_publisher.cpp
    src/object_msgs_msg_HeadPose_subscriber.cpp
    src/object_msgs_HeadPoseStamped_common.cpp
    src/object_msgs_msg_HeadPoseStamped_publisher.cpp
    src/object_msgs_msg_HeadPoseStamped_subscriber.cpp
    src/object_msgs_Landmark_common.cpp
    src/object_msgs_msg_Landmark_publisher.cpp
    src/object_msgs_msg_Landmark_subscriber.cpp
    src/object_msgs_LandmarkStamped_common.cpp
    src/object_msgs_msg_LandmarkStamped_publisher.cpp
    src/object_msgs_msg_LandmarkStamped_subscriber.cpp
    src/object_msgs_LicensePlate_common.cpp
    src/object_msgs_msg_LicensePlate_publisher.cpp
    src/object_msgs_msg_LicensePlate_subscriber.cpp
    src/object_msgs_LicensePlateStamped_common.cpp
    src/object_msgs_msg_LicensePlateStamped_publisher.cpp
    src/object_msgs_msg_LicensePlateStamped_subscriber.cpp
    src/object_msgs_Object_common.cpp
    src/object_msgs_msg_Object_publisher.cpp
    src/object_msgs_msg_Object_subscriber.cpp
    src/object_msgs_ObjectInBox_common.cpp
    src/object_msgs_msg_ObjectInBox_publisher.cpp
    src/object_msgs_msg_ObjectInBox_subscriber.cpp
    src/object_msgs_ObjectInBox3D_common.cpp
    src/object_msgs_msg_ObjectInBox3D_publisher.cpp
    src/object_msgs_msg_ObjectInBox3D_subscriber.cpp
    src/object_msgs_ObjectInMask_common.cpp
    src/object_msgs_msg_ObjectInMask_publisher.cpp
    src/object_msgs_msg_ObjectInMask_subscriber.cpp
    src/object_msgs_Objects_common.cpp
    src/object_msgs_msg_Objects_publisher.cpp
    src/object_msgs_msg_Objects_subscriber.cpp
    src/object_msgs_ObjectsInBoxes_common.cpp
    src/object_msgs_msg_ObjectsInBoxes_publisher.cpp
    src/object_msgs_msg_ObjectsInBoxes_subscriber.cpp
    src/object_msgs_ObjectsInBoxes3D_common.cpp
    src/object_msgs_msg_ObjectsInBoxes3D_publisher.cpp
    src/object_msgs_msg_ObjectsInBoxes3D_subscriber.cpp
    src/object_msgs_ObjectsInMasks_common.cpp
    src/object_msgs_msg_ObjectsInMasks_publisher.cpp
    src/object_msgs_msg_ObjectsInMasks_subscriber.cpp
    src/object_msgs_PerfValue_common.cpp
    src/object_msgs_msg_PerfValue_publisher.cpp
    src/object_msgs_msg_PerfValue_subscriber.cpp
    src/object_msgs_PersonAttribute_common.cpp
    src/object_msgs_msg_PersonAttribute_publisher.cpp
    src/object_msgs_msg_PersonAttribute_subscriber.cpp
    src/object_msgs_PersonAttributeStamped_common.cpp
    src/object_msgs_msg_PersonAttributeStamped_publisher.cpp
    src/object_msgs_msg_PersonAttributeStamped_subscriber.cpp
    src/object_msgs_PersonsStamped_common.cpp
    src/object_msgs_msg_PersonsStamped_publisher.cpp
    src/object_msgs_msg_PersonsStamped_subscriber.cpp
    src/object_msgs_Reidentification_common.cpp
    src/object_msgs_msg_Reidentification_publisher.cpp
    src/object_msgs_msg_Reidentification_subscriber.cpp
    src/object_msgs_ReidentificationStamped_common.cpp
    src/object_msgs_msg_ReidentificationStamped_publisher.cpp
    src/object_msgs_msg_ReidentificationStamped_subscriber.cpp
    src/object_msgs_VehicleAttribs_common.cpp
    src/object_msgs_msg_VehicleAttribs_publisher.cpp
    src/object_msgs_msg_VehicleAttribs_subscriber.cpp
    src/object_msgs_VehicleAttribsStamped_common.cpp
    src/object_msgs_msg_VehicleAttribsStamped_publisher.cpp
    src/object_msgs_msg_VehicleAttribsStamped_subscriber.cpp
)
target_include_directories(object_msgs_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( object_msgs_matlab
	libMatlabDataArray
	)
ament_target_dependencies(
  object_msgs_matlab
  "class_loader"
  "console_bridge"
  "geometry_msgs"
  "rclcpp"
  "rcutils"
  "sensor_msgs"
  "std_msgs"
)
rosidl_target_interfaces(
	  object_msgs_matlab
      ${PROJECT_NAME} "rosidl_typesupport_cpp")
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(object_msgs_matlab PRIVATE "OBJECT_MSGS_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS object_msgs_matlab
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
  object_msgs_matlab
)
ament_package()
# Generated 21-Mar-2020 05:10:53
# Copyright 2019 The MathWorks, Inc.
