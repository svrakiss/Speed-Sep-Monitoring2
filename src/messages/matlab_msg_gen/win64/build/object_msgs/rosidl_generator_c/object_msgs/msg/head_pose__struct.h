// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\HeadPose.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__HEAD_POSE__STRUCT_H_
#define OBJECT_MSGS__MSG__HEAD_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/region_of_interest__struct.h"

// Struct defined in msg/HeadPose in the package object_msgs.
typedef struct object_msgs__msg__HeadPose
{
  float yaw;
  float pitch;
  float roll;
  sensor_msgs__msg__RegionOfInterest roi;
} object_msgs__msg__HeadPose;

// Struct for a sequence of object_msgs__msg__HeadPose.
typedef struct object_msgs__msg__HeadPose__Sequence
{
  object_msgs__msg__HeadPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__HeadPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__HEAD_POSE__STRUCT_H_
