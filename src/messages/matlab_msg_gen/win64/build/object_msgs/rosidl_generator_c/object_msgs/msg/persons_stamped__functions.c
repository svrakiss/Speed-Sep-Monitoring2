// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_msgs:msg\PersonsStamped.idl
// generated code does not contain a copyright notice
#include "object_msgs/msg/persons_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `faces`
#include "object_msgs/msg/object_in_box__functions.h"
// Member `emotions`
#include "object_msgs/msg/emotion__functions.h"
// Member `agegenders`
#include "object_msgs/msg/age_gender__functions.h"
// Member `headposes`
#include "object_msgs/msg/head_pose__functions.h"

bool
object_msgs__msg__PersonsStamped__init(object_msgs__msg__PersonsStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_msgs__msg__PersonsStamped__destroy(msg);
    return false;
  }
  // faces
  if (!object_msgs__msg__ObjectInBox__Sequence__init(&msg->faces, 0)) {
    object_msgs__msg__PersonsStamped__destroy(msg);
    return false;
  }
  // emotions
  if (!object_msgs__msg__Emotion__Sequence__init(&msg->emotions, 0)) {
    object_msgs__msg__PersonsStamped__destroy(msg);
    return false;
  }
  // agegenders
  if (!object_msgs__msg__AgeGender__Sequence__init(&msg->agegenders, 0)) {
    object_msgs__msg__PersonsStamped__destroy(msg);
    return false;
  }
  // headposes
  if (!object_msgs__msg__HeadPose__Sequence__init(&msg->headposes, 0)) {
    object_msgs__msg__PersonsStamped__destroy(msg);
    return false;
  }
  return true;
}

void
object_msgs__msg__PersonsStamped__fini(object_msgs__msg__PersonsStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // faces
  object_msgs__msg__ObjectInBox__Sequence__fini(&msg->faces);
  // emotions
  object_msgs__msg__Emotion__Sequence__fini(&msg->emotions);
  // agegenders
  object_msgs__msg__AgeGender__Sequence__fini(&msg->agegenders);
  // headposes
  object_msgs__msg__HeadPose__Sequence__fini(&msg->headposes);
}

object_msgs__msg__PersonsStamped *
object_msgs__msg__PersonsStamped__create()
{
  object_msgs__msg__PersonsStamped * msg = (object_msgs__msg__PersonsStamped *)malloc(sizeof(object_msgs__msg__PersonsStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_msgs__msg__PersonsStamped));
  bool success = object_msgs__msg__PersonsStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_msgs__msg__PersonsStamped__destroy(object_msgs__msg__PersonsStamped * msg)
{
  if (msg) {
    object_msgs__msg__PersonsStamped__fini(msg);
  }
  free(msg);
}


bool
object_msgs__msg__PersonsStamped__Sequence__init(object_msgs__msg__PersonsStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_msgs__msg__PersonsStamped * data = NULL;
  if (size) {
    data = (object_msgs__msg__PersonsStamped *)calloc(size, sizeof(object_msgs__msg__PersonsStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_msgs__msg__PersonsStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_msgs__msg__PersonsStamped__fini(&data[i - 1]);
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
object_msgs__msg__PersonsStamped__Sequence__fini(object_msgs__msg__PersonsStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_msgs__msg__PersonsStamped__fini(&array->data[i]);
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

object_msgs__msg__PersonsStamped__Sequence *
object_msgs__msg__PersonsStamped__Sequence__create(size_t size)
{
  object_msgs__msg__PersonsStamped__Sequence * array = (object_msgs__msg__PersonsStamped__Sequence *)malloc(sizeof(object_msgs__msg__PersonsStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_msgs__msg__PersonsStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_msgs__msg__PersonsStamped__Sequence__destroy(object_msgs__msg__PersonsStamped__Sequence * array)
{
  if (array) {
    object_msgs__msg__PersonsStamped__Sequence__fini(array);
  }
  free(array);
}
