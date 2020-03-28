// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\AgeGenderStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__AGE_GENDER_STAMPED__STRUCT_H_
#define OBJECT_MSGS__MSG__AGE_GENDER_STAMPED__STRUCT_H_

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
// Member 'objects'
#include "object_msgs/msg/age_gender__struct.h"

// Struct defined in msg/AgeGenderStamped in the package object_msgs.
typedef struct object_msgs__msg__AgeGenderStamped
{
  std_msgs__msg__Header header;
  object_msgs__msg__AgeGender__Sequence objects;
} object_msgs__msg__AgeGenderStamped;

// Struct for a sequence of object_msgs__msg__AgeGenderStamped.
typedef struct object_msgs__msg__AgeGenderStamped__Sequence
{
  object_msgs__msg__AgeGenderStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__AgeGenderStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__AGE_GENDER_STAMPED__STRUCT_H_
