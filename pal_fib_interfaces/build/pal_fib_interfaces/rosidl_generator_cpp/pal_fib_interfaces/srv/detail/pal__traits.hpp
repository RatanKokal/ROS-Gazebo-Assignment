// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pal_fib_interfaces:srv/Pal.idl
// generated code does not contain a copyright notice

#ifndef PAL_FIB_INTERFACES__SRV__DETAIL__PAL__TRAITS_HPP_
#define PAL_FIB_INTERFACES__SRV__DETAIL__PAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pal_fib_interfaces/srv/detail/pal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pal_fib_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Pal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: string_to_check
  {
    out << "string_to_check: ";
    rosidl_generator_traits::value_to_yaml(msg.string_to_check, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: string_to_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_to_check: ";
    rosidl_generator_traits::value_to_yaml(msg.string_to_check, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pal_fib_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pal_fib_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_fib_interfaces::srv::Pal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_fib_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_fib_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pal_fib_interfaces::srv::Pal_Request & msg)
{
  return pal_fib_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pal_fib_interfaces::srv::Pal_Request>()
{
  return "pal_fib_interfaces::srv::Pal_Request";
}

template<>
inline const char * name<pal_fib_interfaces::srv::Pal_Request>()
{
  return "pal_fib_interfaces/srv/Pal_Request";
}

template<>
struct has_fixed_size<pal_fib_interfaces::srv::Pal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pal_fib_interfaces::srv::Pal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pal_fib_interfaces::srv::Pal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pal_fib_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Pal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pal_fib_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pal_fib_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pal_fib_interfaces::srv::Pal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pal_fib_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pal_fib_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const pal_fib_interfaces::srv::Pal_Response & msg)
{
  return pal_fib_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pal_fib_interfaces::srv::Pal_Response>()
{
  return "pal_fib_interfaces::srv::Pal_Response";
}

template<>
inline const char * name<pal_fib_interfaces::srv::Pal_Response>()
{
  return "pal_fib_interfaces/srv/Pal_Response";
}

template<>
struct has_fixed_size<pal_fib_interfaces::srv::Pal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pal_fib_interfaces::srv::Pal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pal_fib_interfaces::srv::Pal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pal_fib_interfaces::srv::Pal>()
{
  return "pal_fib_interfaces::srv::Pal";
}

template<>
inline const char * name<pal_fib_interfaces::srv::Pal>()
{
  return "pal_fib_interfaces/srv/Pal";
}

template<>
struct has_fixed_size<pal_fib_interfaces::srv::Pal>
  : std::integral_constant<
    bool,
    has_fixed_size<pal_fib_interfaces::srv::Pal_Request>::value &&
    has_fixed_size<pal_fib_interfaces::srv::Pal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pal_fib_interfaces::srv::Pal>
  : std::integral_constant<
    bool,
    has_bounded_size<pal_fib_interfaces::srv::Pal_Request>::value &&
    has_bounded_size<pal_fib_interfaces::srv::Pal_Response>::value
  >
{
};

template<>
struct is_service<pal_fib_interfaces::srv::Pal>
  : std::true_type
{
};

template<>
struct is_service_request<pal_fib_interfaces::srv::Pal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pal_fib_interfaces::srv::Pal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PAL_FIB_INTERFACES__SRV__DETAIL__PAL__TRAITS_HPP_
