// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\PersonAttributeStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__PERSON_ATTRIBUTE_STAMPED__STRUCT_H_
#define OBJECT_MSGS__MSG__PERSON_ATTRIBUTE_STAMPED__STRUCT_H_

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
// Member 'attributes'
#include "object_msgs/msg/person_attribute__struct.h"

// Struct defined in msg/PersonAttributeStamped in the package object_msgs.
typedef struct object_msgs__msg__PersonAttributeStamped
{
  std_msgs__msg__Header header;
  object_msgs__msg__PersonAttribute__Sequence attributes;
} object_msgs__msg__PersonAttributeStamped;

// Struct for a sequence of object_msgs__msg__PersonAttributeStamped.
typedef struct object_msgs__msg__PersonAttributeStamped__Sequence
{
  object_msgs__msg__PersonAttributeStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__PersonAttributeStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__PERSON_ATTRIBUTE_STAMPED__STRUCT_H_
