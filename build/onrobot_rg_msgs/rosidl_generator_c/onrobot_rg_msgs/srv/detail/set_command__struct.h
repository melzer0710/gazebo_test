// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from onrobot_rg_msgs:srv/SetCommand.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__STRUCT_H_
#define ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetCommand in the package onrobot_rg_msgs.
typedef struct onrobot_rg_msgs__srv__SetCommand_Request
{
  rosidl_runtime_c__String command;
} onrobot_rg_msgs__srv__SetCommand_Request;

// Struct for a sequence of onrobot_rg_msgs__srv__SetCommand_Request.
typedef struct onrobot_rg_msgs__srv__SetCommand_Request__Sequence
{
  onrobot_rg_msgs__srv__SetCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} onrobot_rg_msgs__srv__SetCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetCommand in the package onrobot_rg_msgs.
typedef struct onrobot_rg_msgs__srv__SetCommand_Response
{
  bool success;
  rosidl_runtime_c__String message;
} onrobot_rg_msgs__srv__SetCommand_Response;

// Struct for a sequence of onrobot_rg_msgs__srv__SetCommand_Response.
typedef struct onrobot_rg_msgs__srv__SetCommand_Response__Sequence
{
  onrobot_rg_msgs__srv__SetCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} onrobot_rg_msgs__srv__SetCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__STRUCT_H_
