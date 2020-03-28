// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\LandmarkStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__LANDMARK_STAMPED__STRUCT_H_
#define OBJECT_MSGS__MSG__LANDMARK_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'landmarks'
#include "object_msgs/msg/landmark__struct.h"

// Struct defined in msg/LandmarkStamped in the package object_msgs.
typedef struct object_msgs__msg__LandmarkStamped
{
  std_msgs__msg__Header header;
  object_msgs__msg__Landmark__Sequence landmarks;
} object_msgs__msg__LandmarkStamped;

// Struct for a sequence of object_msgs__msg__LandmarkStamped.
typedef struct object_msgs__msg__LandmarkStamped__Sequence
{
  object_msgs__msg__LandmarkStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__LandmarkStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__LANDMARK_STAMPED__STRUCT_H_
