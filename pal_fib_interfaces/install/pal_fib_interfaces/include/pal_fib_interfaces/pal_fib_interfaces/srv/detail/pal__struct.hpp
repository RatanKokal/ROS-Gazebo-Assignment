// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pal_fib_interfaces:srv/Pal.idl
// generated code does not contain a copyright notice

#ifndef PAL_FIB_INTERFACES__SRV__DETAIL__PAL__STRUCT_HPP_
#define PAL_FIB_INTERFACES__SRV__DETAIL__PAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pal_fib_interfaces__srv__Pal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pal_fib_interfaces__srv__Pal_Request __declspec(deprecated)
#endif

namespace pal_fib_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Pal_Request_
{
  using Type = Pal_Request_<ContainerAllocator>;

  explicit Pal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->string_to_check = "";
    }
  }

  explicit Pal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : string_to_check(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->string_to_check = "";
    }
  }

  // field types and members
  using _string_to_check_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _string_to_check_type string_to_check;

  // setters for named parameter idiom
  Type & set__string_to_check(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->string_to_check = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_fib_interfaces__srv__Pal_Request
    std::shared_ptr<pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_fib_interfaces__srv__Pal_Request
    std::shared_ptr<pal_fib_interfaces::srv::Pal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pal_Request_ & other) const
  {
    if (this->string_to_check != other.string_to_check) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pal_Request_

// alias to use template instance with default allocator
using Pal_Request =
  pal_fib_interfaces::srv::Pal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pal_fib_interfaces


#ifndef _WIN32
# define DEPRECATED__pal_fib_interfaces__srv__Pal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pal_fib_interfaces__srv__Pal_Response __declspec(deprecated)
#endif

namespace pal_fib_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Pal_Response_
{
  using Type = Pal_Response_<ContainerAllocator>;

  explicit Pal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit Pal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pal_fib_interfaces__srv__Pal_Response
    std::shared_ptr<pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pal_fib_interfaces__srv__Pal_Response
    std::shared_ptr<pal_fib_interfaces::srv::Pal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pal_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pal_Response_

// alias to use template instance with default allocator
using Pal_Response =
  pal_fib_interfaces::srv::Pal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pal_fib_interfaces

namespace pal_fib_interfaces
{

namespace srv
{

struct Pal
{
  using Request = pal_fib_interfaces::srv::Pal_Request;
  using Response = pal_fib_interfaces::srv::Pal_Response;
};

}  // namespace srv

}  // namespace pal_fib_interfaces

#endif  // PAL_FIB_INTERFACES__SRV__DETAIL__PAL__STRUCT_HPP_
