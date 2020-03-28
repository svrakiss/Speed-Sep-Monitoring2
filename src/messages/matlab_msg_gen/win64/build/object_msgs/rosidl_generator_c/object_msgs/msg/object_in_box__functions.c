// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg\ObjectInBox.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/object_in_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `object`
#include "object_msgs/msg/object__functions.h"
// Member `roi`
#include "sensor_msgs/msg/region_of_interest__functions.h"

bool
object_msgs__msg__ObjectInBox__init(object_msgs__msg__ObjectInBox * msg)
{
  if (!msg) {
    return false;
  }
  // object
  if (!object_msgs__msg__Object__init(&msg->object)) {
    object_msgs__msg__ObjectInBox__destroy(msg);
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    object_msgs__msg__ObjectInBox__destroy(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__ObjectInBox__fini(object_msgs__msg__ObjectInBox * msg)
{
  if (!msg) {
    return;
  }
  // object
  object_msgs__msg__Object__fini(&msg->object);
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

object_msgs__msg__ObjectInBox *
object_msgs__msg__ObjectInBox__create()
{
  object_msgs__msg__ObjectInBox * msg = (object_msgs__msg__ObjectInBox *)malloc(sizeof(object_msgs__msg__ObjectInBox));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__ObjectInBox));
  bool success = object_msgs__msg__ObjectInBox__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__ObjectInBox__destroy(object_msgs__msg__ObjectInBox * msg)
{
  if (msg) {
    object_msgs__msg__ObjectInBox__fini(msg);
  }
  free(msg);
}


bool
object_msgs__msg__ObjectInBox__Sequence__init(object_msgs__msg__ObjectInBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_msgs__msg__ObjectInBox * data = NULL;
  if (size) {
    data = (object_msgs__msg__ObjectInBox *)calloc(size, sizeof(object_msgs__msg__ObjectInBox));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__ObjectInBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__ObjectInBox__fini(&data[i - 1]);
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
object_msgs__msg__ObjectInBox__Sequence__fini(object_msgs__msg__ObjectInBox__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_msgs__msg__ObjectInBox__fini(&array->data[i]);
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

object_msgs__msg__ObjectInBox__Sequence *
object_msgs__msg__ObjectInBox__Sequence__create(size_t size)
{
  object_msgs__msg__ObjectInBox__Sequence * array = (object_msgs__msg__ObjectInBox__Sequence *)malloc(sizeof(object_msgs__msg__ObjectInBox__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__ObjectInBox__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__ObjectInBox__Sequence__destroy(object_msgs__msg__ObjectInBox__Sequence * array)
{
  if (array) {
    object_msgs__msg__ObjectInBox__Sequence__fini(array);
  }
  free(array);
}
