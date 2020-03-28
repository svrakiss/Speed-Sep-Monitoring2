// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\LicensePlateStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__LICENSE_PLATE_STAMPED__STRUCT_H_
#define OBJECT_MSGS__MSG__LICENSE_PLATE_STAMPED__STRUCT_H_

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
// Member 'licenses'
#include "object_msgs/msg/license_plate__struct.h"

// Struct defined in msg/LicensePlateStamped in the package object_msgs.
typedef struct object_msgs__msg__LicensePlateStamped
{
  std_msgs__msg__Header header;
  object_msgs__msg__LicensePlate__Sequence licenses;
} object_msgs__msg__LicensePlateStamped;

// Struct for a sequence of object_msgs__msg__LicensePlateStamped.
typedef struct object_msgs__msg__LicensePlateStamped__Sequence
{
  object_msgs__msg__LicensePlateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_msgs__msg__LicensePlateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__LICENSE_PLATE_STAMPED__STRUCT_H_
