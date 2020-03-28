// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\ObjectInMask.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__OBJECT_IN_MASK__STRUCT_H_
#define OBJECT_MSGS__MSG__OBJECT_IN_MASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_generator_c/string.h"
// Member 'roi'
#include "sensor_msgs/msg/region_of_interest__struct.h"
// Member 'mask_array'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/ObjectInMask in the package object_msgs.
typedef struct object_msgs__msg__ObjectInMask
{
  rosidl_generator_c__String object_name;
  float probability;
  sensor_msgs__msg__RegionOfInterest roi;
  rosidl_generator_c__float__Sequence mask_array;
} object_msgs__msg__ObjectInMask;

// Struct for a sequence of object_msgs__msg__ObjectInMask.
typedef struct object_msgs__msg__ObjectInMask__Sequence
{
  object_msgs__msg__ObjectInMask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__ObjectInMask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__OBJECT_IN_MASK__STRUCT_H_
