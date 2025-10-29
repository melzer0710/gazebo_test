// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from onrobot_rg_msgs:srv/GripperPose.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__STRUCT_H_
#define ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'known'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in srv/GripperPose in the package onrobot_rg_msgs.
typedef struct onrobot_rg_msgs__srv__GripperPose_Request
{
  geometry_msgs__msg__Pose2D known;
} onrobot_rg_msgs__srv__GripperPose_Request;

// Struct for a sequence of onrobot_rg_msgs__srv__GripperPose_Request.
typedef struct onrobot_rg_msgs__srv__GripperPose_Request__Sequence
{
  onrobot_rg_msgs__srv__GripperPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} onrobot_rg_msgs__srv__GripperPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in srv/GripperPose in the package onrobot_rg_msgs.
typedef struct onrobot_rg_msgs__srv__GripperPose_Response
{
  geometry_msgs__msg__Pose2D pose;
} onrobot_rg_msgs__srv__GripperPose_Response;

// Struct for a sequence of onrobot_rg_msgs__srv__GripperPose_Response.
typedef struct onrobot_rg_msgs__srv__GripperPose_Response__Sequence
{
  onrobot_rg_msgs__srv__GripperPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} onrobot_rg_msgs__srv__GripperPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__STRUCT_H_
