// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\ObjectInBox3D.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__STRUCT_H_
#define OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object'
#include "object_msgs/msg/object__struct.h"
// Member 'roi'
#include "sensor_msgs/msg/region_of_interest__struct.h"
// Member 'min'
// Member 'max'
#include "geometry_msgs/msg/point32__struct.h"

// Struct defined in msg/ObjectInBox3D in the package object_msgs.
typedef struct object_msgs__msg__ObjectInBox3D
{
  object_msgs__msg__Object object;
  sensor_msgs__msg__RegionOfInterest roi;
  geometry_msgs__msg__Point32 min;
  geometry_msgs__msg__Point32 max;
} object_msgs__msg__ObjectInBox3D;

// Struct for a sequence of object_msgs__msg__ObjectInBox3D.
typedef struct object_msgs__msg__ObjectInBox3D__Sequence
{
  object_msgs__msg__ObjectInBox3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__ObjectInBox3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__OBJECT_IN_BOX3_D__STRUCT_H_
