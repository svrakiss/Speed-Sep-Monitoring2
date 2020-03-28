// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg\ReidentificationStamped.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/reidentification_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `reidentified_vector`
#include "object_msgs/msg/reidentification__functions.h"

bool
object_msgs__msg__ReidentificationStamped__init(object_msgs__msg__ReidentificationStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_msgs__msg__ReidentificationStamped__destroy(msg);
    return false;
  }
  // reidentified_vector
  if (!object_msgs__msg__Reidentification__Sequence__init(&msg->reidentified_vector, 0)) {
    object_msgs__msg__ReidentificationStamped__destroy(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__ReidentificationStamped__fini(object_msgs__msg__ReidentificationStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // reidentified_vector
  object_msgs__msg__Reidentification__Sequence__fini(&msg->reidentified_vector);
}

object_msgs__msg__ReidentificationStamped *
object_msgs__msg__ReidentificationStamped__create()
{
  object_msgs__msg__ReidentificationStamped * msg = (object_msgs__msg__ReidentificationStamped *)malloc(sizeof(object_msgs__msg__ReidentificationStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__ReidentificationStamped));
  bool success = object_msgs__msg__ReidentificationStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__ReidentificationStamped__destroy(object_msgs__msg__ReidentificationStamped * msg)
{
  if (msg) {
    object_msgs__msg__ReidentificationStamped__fini(msg);
  }
  free(msg);
}


bool
object_msgs__msg__ReidentificationStamped__Sequence__init(object_msgs__msg__ReidentificationStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_msgs__msg__ReidentificationStamped * data = NULL;
  if (size) {
    data = (object_msgs__msg__ReidentificationStamped *)calloc(size, sizeof(object_msgs__msg__ReidentificationStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__ReidentificationStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__ReidentificationStamped__fini(&data[i - 1]);
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
object_msgs__msg__ReidentificationStamped__Sequence__fini(object_msgs__msg__ReidentificationStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_msgs__msg__ReidentificationStamped__fini(&array->data[i]);
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

object_msgs__msg__ReidentificationStamped__Sequence *
object_msgs__msg__ReidentificationStamped__Sequence__create(size_t size)
{
  object_msgs__msg__ReidentificationStamped__Sequence * array = (object_msgs__msg__ReidentificationStamped__Sequence *)malloc(sizeof(object_msgs__msg__ReidentificationStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__ReidentificationStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__ReidentificationStamped__Sequence__destroy(object_msgs__msg__ReidentificationStamped__Sequence * array)
{
  if (array) {
    object_msgs__msg__ReidentificationStamped__Sequence__fini(array);
  }
  free(array);
}
