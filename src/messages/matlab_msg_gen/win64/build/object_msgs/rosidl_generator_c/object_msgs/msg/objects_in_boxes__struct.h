// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\ObjectsInBoxes.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__OBJECTS_IN_BOXES__STRUCT_H_
#define OBJECT_MSGS__MSG__OBJECTS_IN_BOXES__STRUCT_H_

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
// Member 'image'
#include "sensor_msgs/msg/image__struct.h"
// Member 'objects_vector'
#include "object_msgs/msg/object_in_box__struct.h"

// Struct defined in msg/ObjectsInBoxes in the package object_msgs.
typedef struct object_msgs__msg__ObjectsInBoxes
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image image;
  object_msgs__msg__ObjectInBox__Sequence objects_vector;
  float inference_time_ms;
} object_msgs__msg__ObjectsInBoxes;

// Struct for a sequence of object_msgs__msg__ObjectsInBoxes.
typedef struct object_msgs__msg__ObjectsInBoxes__Sequence
{
  object_msgs__msg__ObjectsInBoxes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__ObjectsInBoxes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__OBJECTS_IN_BOXES__STRUCT_H_
