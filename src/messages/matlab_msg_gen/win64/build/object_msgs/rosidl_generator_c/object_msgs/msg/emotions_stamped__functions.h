// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_msgs:msg\EmotionsStamped.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__EMOTIONS_STAMPED__FUNCTIONS_H_
#define OBJECT_MSGS__MSG__EMOTIONS_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "object_msgs/msg/emotions_stamped__struct.h"

/// Initialize msg/EmotionsStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_msgs__msg__EmotionsStamped
 * )) before or use
 * object_msgs__msg__EmotionsStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__EmotionsStamped__init(object_msgs__msg__EmotionsStamped * msg);

/// Finalize msg/EmotionsStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__EmotionsStamped__fini(object_msgs__msg__EmotionsStamped * msg);

/// Create msg/EmotionsStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_msgs__msg__EmotionsStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__EmotionsStamped *
object_msgs__msg__EmotionsStamped__create();

/// Destroy msg/EmotionsStamped message.
/**
 * It calls
 * object_msgs__msg__EmotionsStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__EmotionsStamped__destroy(object_msgs__msg__EmotionsStamped * msg);


/// Initialize array of msg/EmotionsStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_msgs__msg__EmotionsStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
bool
object_msgs__msg__EmotionsStamped__Sequence__init(object_msgs__msg__EmotionsStamped__Sequence * array, size_t size);

/// Finalize array of msg/EmotionsStamped messages.
/**
 * It calls
 * object_msgs__msg__EmotionsStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__EmotionsStamped__Sequence__fini(object_msgs__msg__EmotionsStamped__Sequence * array);

/// Create array of msg/EmotionsStamped messages.
/**
 * It allocates the memory for the array and calls
 * object_msgs__msg__EmotionsStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
object_msgs__msg__EmotionsStamped__Sequence *
object_msgs__msg__EmotionsStamped__Sequence__create(size_t size);

/// Destroy array of msg/EmotionsStamped messages.
/**
 * It calls
 * object_msgs__msg__EmotionsStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_msgs
void
object_msgs__msg__EmotionsStamped__Sequence__destroy(object_msgs__msg__EmotionsStamped__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_MSGS__MSG__EMOTIONS_STAMPED__FUNCTIONS_H_
