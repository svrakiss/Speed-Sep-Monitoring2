// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\ObjectsInBoxes3D.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__OBJECTS_IN_BOXES3_D__STRUCT_H_
#define OBJECT_MSGS__MSG__OBJECTS_IN_BOXES3_D__STRUCT_H_

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
// Member 'objects_in_boxes'
#include "object_msgs/msg/object_in_box3_d__struct.h"

// Struct defined in msg/ObjectsInBoxes3D in the package object_msgs.
typedef struct object_msgs__msg__ObjectsInBoxes3D
{
  std_msgs__msg__Header header;
  object_msgs__msg__ObjectInBox3D__Sequence objects_in_boxes;
} object_msgs__msg__ObjectsInBoxes3D;

// Struct for a sequence of object_msgs__msg__ObjectsInBoxes3D.
typedef struct object_msgs__msg__ObjectsInBoxes3D__Sequence
{
  object_msgs__msg__ObjectsInBoxes3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__ObjectsInBoxes3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__OBJECTS_IN_BOXES3_D__STRUCT_H_
