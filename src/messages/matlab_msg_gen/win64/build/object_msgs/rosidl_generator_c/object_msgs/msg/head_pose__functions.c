// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg\HeadPose.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/head_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `roi`
#include "sensor_msgs/msg/region_of_interest__functions.h"

bool
object_msgs__msg__HeadPose__init(object_msgs__msg__HeadPose * msg)
{
  if (!msg) {
    return false;
  }
  // yaw
  // pitch
  // roll
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    object_msgs__msg__HeadPose__destroy(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__HeadPose__fini(object_msgs__msg__HeadPose * msg)
{
  if (!msg) {
    return;
  }
  // yaw
  // pitch
  // roll
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

object_msgs__msg__HeadPose *
object_msgs__msg__HeadPose__create()
{
  object_msgs__msg__HeadPose * msg = (object_msgs__msg__HeadPose *)malloc(sizeof(object_msgs__msg__HeadPose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__HeadPose));
  bool success = object_msgs__msg__HeadPose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__HeadPose__destroy(object_msgs__msg__HeadPose * msg)
{
  if (msg) {
    object_msgs__msg__HeadPose__fini(msg);
  }
  free(msg);
}


bool
object_msgs__msg__HeadPose__Sequence__init(object_msgs__msg__HeadPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_msgs__msg__HeadPose * data = NULL;
  if (size) {
    data = (object_msgs__msg__HeadPose *)calloc(size, sizeof(object_msgs__msg__HeadPose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__HeadPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__HeadPose__fini(&data[i - 1]);
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
object_msgs__msg__HeadPose__Sequence__fini(object_msgs__msg__HeadPose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_msgs__msg__HeadPose__fini(&array->data[i]);
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

object_msgs__msg__HeadPose__Sequence *
object_msgs__msg__HeadPose__Sequence__create(size_t size)
{
  object_msgs__msg__HeadPose__Sequence * array = (object_msgs__msg__HeadPose__Sequence *)malloc(sizeof(object_msgs__msg__HeadPose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__HeadPose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__HeadPose__Sequence__destroy(object_msgs__msg__HeadPose__Sequence * array)
{
  if (array) {
    object_msgs__msg__HeadPose__Sequence__fini(array);
  }
  free(array);
}
