// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\Landmark.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__LANDMARK__FUNCTIONS_H_
#define OBJECT_MSGS__MSG__LANDMARK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "object_msgs/msg/landmark__struct.h"

/// Initialize msg/Landmark message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_msgs__msg__Landmark
 * )) before or use
 * object_msgs__msg__Landmark__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__Landmark__init(object_msgs__msg__Landmark * msg);

/// Finalize msg/Landmark message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__Landmark__fini(object_msgs__msg__Landmark * msg);

/// Create msg/Landmark message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_msgs__msg__Landmark__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__Landmark *
object_msgs__msg__Landmark__create();

/// Destroy msg/Landmark message.
/**
 * It calls
 * object_msgs__msg__Landmark__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__Landmark__destroy(object_msgs__msg__Landmark * msg);


/// Initialize array of msg/Landmark messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_msgs__msg__Landmark__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__Landmark__Sequence__init(object_msgs__msg__Landmark__Sequence * array, size_t size);

/// Finalize array of msg/Landmark messages.
/**
 * It calls
 * object_msgs__msg__Landmark__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__Landmark__Sequence__fini(object_msgs__msg__Landmark__Sequence * array);

/// Create array of msg/Landmark messages.
/**
 * It allocates the memory for the array and calls
 * object_msgs__msg__Landmark__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__Landmark__Sequence *
object_msgs__msg__Landmark__Sequence__create(size_t size);

/// Destroy array of msg/Landmark messages.
/**
 * It calls
 * object_msgs__msg__Landmark__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__Landmark__Sequence__destroy(object_msgs__msg__Landmark__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__LANDMARK__FUNCTIONS_H_
