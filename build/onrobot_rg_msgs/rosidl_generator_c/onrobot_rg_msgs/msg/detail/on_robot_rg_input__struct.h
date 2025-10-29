// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from onrobot_rg_msgs:msg/OnRobotRGInput.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__STRUCT_H_
#define ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/OnRobotRGInput in the package onrobot_rg_msgs.
/**
  * gfof : Current fingertip offset in 1/10 millimeters. The value is a signed two's complement number.
 */
typedef struct onrobot_rg_msgs__msg__OnRobotRGInput
{
  uint16_t gfof;
  /// ggwd : Current width between the gripper fingers in 1/10 millimeters.
  ///        The width is provided without any fingertip offset, as it is measured between the insides of the aluminum fingers.
  uint16_t ggwd;
  /// gsta : Current device status, which indicates the status of the gripper and its motion.
  /// Bit       - Name              - Description
  /// 0 (LSB)   - Busy              - High (1) when a motion is ongoing, low (0) when not. The gripper will only accept new commands when this flag is low.
  /// 1         - Grip detected     - High (1) when an internal- or external grip is detected.
  /// 2         - S1 pushed         - High (1) when safety switch 1 is pushed.
  /// 3         - S1 trigged        - High (1) when safety circuit 1 is activated. The gripper will not move while this flag is high.
  /// 4         - S2 pushed         - High (1) when safety switch 2 is pushed.
  /// 5         - S2 trigged        - High (1) when safety circuit 2 is activated. The gripper will not move while this flag is high.
  /// 6         - Safety error      - High (1) when on power on any of the safety switch is pushed.
  /// 7 - 15    - Reserved          - Not used.
  uint8_t gsta;
  /// gwdf : Current width between the gripper fingers in 1/10 millimeters.
  ///        The set fingertip offset is considered.
  uint16_t gwdf;
} onrobot_rg_msgs__msg__OnRobotRGInput;

// Struct for a sequence of onrobot_rg_msgs__msg__OnRobotRGInput.
typedef struct onrobot_rg_msgs__msg__OnRobotRGInput__Sequence
{
  onrobot_rg_msgs__msg__OnRobotRGInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} onrobot_rg_msgs__msg__OnRobotRGInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__STRUCT_H_
