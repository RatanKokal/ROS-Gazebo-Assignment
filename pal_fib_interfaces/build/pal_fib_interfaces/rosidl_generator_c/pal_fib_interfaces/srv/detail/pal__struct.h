// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pal_fib_interfaces:srv/Pal.idl
// generated code does not contain a copyright notice

#ifndef PAL_FIB_INTERFACES__SRV__DETAIL__PAL__STRUCT_H_
#define PAL_FIB_INTERFACES__SRV__DETAIL__PAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'string_to_check'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Pal in the package pal_fib_interfaces.
typedef struct pal_fib_interfaces__srv__Pal_Request
{
  rosidl_runtime_c__String string_to_check;
} pal_fib_interfaces__srv__Pal_Request;

// Struct for a sequence of pal_fib_interfaces__srv__Pal_Request.
typedef struct pal_fib_interfaces__srv__Pal_Request__Sequence
{
  pal_fib_interfaces__srv__Pal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_fib_interfaces__srv__Pal_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Pal in the package pal_fib_interfaces.
typedef struct pal_fib_interfaces__srv__Pal_Response
{
  bool result;
} pal_fib_interfaces__srv__Pal_Response;

// Struct for a sequence of pal_fib_interfaces__srv__Pal_Response.
typedef struct pal_fib_interfaces__srv__Pal_Response__Sequence
{
  pal_fib_interfaces__srv__Pal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pal_fib_interfaces__srv__Pal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAL_FIB_INTERFACES__SRV__DETAIL__PAL__STRUCT_H_
