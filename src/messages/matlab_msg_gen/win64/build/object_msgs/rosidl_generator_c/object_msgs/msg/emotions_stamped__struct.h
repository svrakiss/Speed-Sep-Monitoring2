// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\EmotionsStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__EMOTIONS_STAMPED__STRUCT_H_
#define OBJECT_MSGS__MSG__EMOTIONS_STAMPED__STRUCT_H_

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
// Member 'emotions'
#include "object_msgs/msg/emotion__struct.h"

// Struct defined in msg/EmotionsStamped in the package object_msgs.
typedef struct object_msgs__msg__EmotionsStamped
{
  std_msgs__msg__Header header;
  object_msgs__msg__Emotion__Sequence emotions;
} object_msgs__msg__EmotionsStamped;

// Struct for a sequence of object_msgs__msg__EmotionsStamped.
typedef struct object_msgs__msg__EmotionsStamped__Sequence
{
  object_msgs__msg__EmotionsStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__EmotionsStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__EMOTIONS_STAMPED__STRUCT_H_
