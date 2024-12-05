// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pal_fib_interfaces:srv/Pal.idl
// generated code does not contain a copyright notice

#ifndef PAL_FIB_INTERFACES__SRV__DETAIL__PAL__BUILDER_HPP_
#define PAL_FIB_INTERFACES__SRV__DETAIL__PAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pal_fib_interfaces/srv/detail/pal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pal_fib_interfaces
{

namespace srv
{

namespace builder
{

class Init_Pal_Request_string_to_check
{
public:
  Init_Pal_Request_string_to_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_fib_interfaces::srv::Pal_Request string_to_check(::pal_fib_interfaces::srv::Pal_Request::_string_to_check_type arg)
  {
    msg_.string_to_check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_fib_interfaces::srv::Pal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_fib_interfaces::srv::Pal_Request>()
{
  return pal_fib_interfaces::srv::builder::Init_Pal_Request_string_to_check();
}

}  // namespace pal_fib_interfaces


namespace pal_fib_interfaces
{

namespace srv
{

namespace builder
{

class Init_Pal_Response_result
{
public:
  Init_Pal_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pal_fib_interfaces::srv::Pal_Response result(::pal_fib_interfaces::srv::Pal_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pal_fib_interfaces::srv::Pal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pal_fib_interfaces::srv::Pal_Response>()
{
  return pal_fib_interfaces::srv::builder::Init_Pal_Response_result();
}

}  // namespace pal_fib_interfaces

#endif  // PAL_FIB_INTERFACES__SRV__DETAIL__PAL__BUILDER_HPP_
