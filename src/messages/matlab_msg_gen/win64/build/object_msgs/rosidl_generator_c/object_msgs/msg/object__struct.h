// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\Object.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__OBJECT__STRUCT_H_
#define OBJECT_MSGS__MSG__OBJECT__STRUCT_H_

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

// Struct defined in msg/Object in the package object_msgs.
typedef struct object_msgs__msg__Object
{
  rosidl_generator_c__String object_name;
  float probability;
} object_msgs__msg__Object;

// Struct for a sequence of object_msgs__msg__Object.
typedef struct object_msgs__msg__Object__Sequence
{
  object_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__OBJECT__STRUCT_H_
