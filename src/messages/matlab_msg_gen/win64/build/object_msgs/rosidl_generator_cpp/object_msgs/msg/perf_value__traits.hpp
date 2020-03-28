// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_msgs:msg\PerfValue.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_MSGS__MSG__PERF_VALUE__TRAITS_HPP_
#define OBJECT_MSGS__MSG__PERF_VALUE__TRAITS_HPP_

#include "object_msgs/msg/perf_value__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_msgs::msg::PerfValue>()
{
  return "object_msgs::msg::PerfValue";
}

template<>
struct has_fixed_size<object_msgs::msg::PerfValue>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<object_msgs::msg::PerfValue>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_MSGS__MSG__PERF_VALUE__TRAITS_HPP_
