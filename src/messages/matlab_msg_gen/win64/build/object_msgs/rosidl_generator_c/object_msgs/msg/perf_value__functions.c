// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg\PerfValue.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/perf_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
object_msgs__msg__PerfValue__init(object_msgs__msg__PerfValue * msg)
{
  if (!msg) {
    return false;
  }
  // average
  // min
  // max
  // std_dev
  // window
  return true;
}

void
object_msgs__msg__PerfValue__fini(object_msgs__msg__PerfValue * msg)
{
  if (!msg) {
    return;
  }
  // average
  // min
  // max
  // std_dev
  // window
}

object_msgs__msg__PerfValue *
object_msgs__msg__PerfValue__create()
{
  object_msgs__msg__PerfValue * msg = (object_msgs__msg__PerfValue *)malloc(sizeof(object_msgs__msg__PerfValue));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__PerfValue));
  bool success = object_msgs__msg__PerfValue__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__PerfValue__destroy(object_msgs__msg__PerfValue * msg)
{
  if (msg) {
    object_msgs__msg__PerfValue__fini(msg);
  }
  free(msg);
}


bool
object_msgs__msg__PerfValue__Sequence__init(object_msgs__msg__PerfValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_msgs__msg__PerfValue * data = NULL;
  if (size) {
    data = (object_msgs__msg__PerfValue *)calloc(size, sizeof(object_msgs__msg__PerfValue));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__PerfValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__PerfValue__fini(&data[i - 1]);
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
object_msgs__msg__PerfValue__Sequence__fini(object_msgs__msg__PerfValue__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_msgs__msg__PerfValue__fini(&array->data[i]);
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

object_msgs__msg__PerfValue__Sequence *
object_msgs__msg__PerfValue__Sequence__create(size_t size)
{
  object_msgs__msg__PerfValue__Sequence * array = (object_msgs__msg__PerfValue__Sequence *)malloc(sizeof(object_msgs__msg__PerfValue__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__PerfValue__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__PerfValue__Sequence__destroy(object_msgs__msg__PerfValue__Sequence * array)
{
  if (array) {
    object_msgs__msg__PerfValue__Sequence__fini(array);
  }
  free(array);
}
