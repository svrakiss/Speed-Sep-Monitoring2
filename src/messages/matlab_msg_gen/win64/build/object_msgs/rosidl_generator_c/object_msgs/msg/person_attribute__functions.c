// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg\PersonAttribute.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/person_attribute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `attribute`
#include "rosidl_generator_c/string_functions.h"
// Member `roi`
#include "sensor_msgs/msg/region_of_interest__functions.h"

bool
object_msgs__msg__PersonAttribute__init(object_msgs__msg__PersonAttribute * msg)
{
  if (!msg) {
    return false;
  }
  // attribute
  if (!rosidl_generator_c__String__init(&msg->attribute)) {
    object_msgs__msg__PersonAttribute__destroy(msg);
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    object_msgs__msg__PersonAttribute__destroy(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__PersonAttribute__fini(object_msgs__msg__PersonAttribute * msg)
{
  if (!msg) {
    return;
  }
  // attribute
  rosidl_generator_c__String__fini(&msg->attribute);
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

object_msgs__msg__PersonAttribute *
object_msgs__msg__PersonAttribute__create()
{
  object_msgs__msg__PersonAttribute * msg = (object_msgs__msg__PersonAttribute *)malloc(sizeof(object_msgs__msg__PersonAttribute));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__PersonAttribute));
  bool success = object_msgs__msg__PersonAttribute__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__PersonAttribute__destroy(object_msgs__msg__PersonAttribute * msg)
{
  if (msg) {
    object_msgs__msg__PersonAttribute__fini(msg);
  }
  free(msg);
}


bool
object_msgs__msg__PersonAttribute__Sequence__init(object_msgs__msg__PersonAttribute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_msgs__msg__PersonAttribute * data = NULL;
  if (size) {
    data = (object_msgs__msg__PersonAttribute *)calloc(size, sizeof(object_msgs__msg__PersonAttribute));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__PersonAttribute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__PersonAttribute__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
object_msgs__msg__PersonAttribute__Sequence__fini(object_msgs__msg__PersonAttribute__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_msgs__msg__PersonAttribute__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

object_msgs__msg__PersonAttribute__Sequence *
object_msgs__msg__PersonAttribute__Sequence__create(size_t size)
{
  object_msgs__msg__PersonAttribute__Sequence * array = (object_msgs__msg__PersonAttribute__Sequence *)malloc(sizeof(object_msgs__msg__PersonAttribute__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__PersonAttribute__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__PersonAttribute__Sequence__destroy(object_msgs__msg__PersonAttribute__Sequence * array)
{
  if (array) {
    object_msgs__msg__PersonAttribute__Sequence__fini(array);
  }
  free(array);
}
