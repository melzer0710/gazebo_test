// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from onrobot_rg_msgs:msg/OnRobotRGInput.idl
// generated code does not contain a copyright notice
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_input__rosidl_typesupport_fastrtps_cpp.hpp"
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_input__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace onrobot_rg_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_onrobot_rg_msgs
cdr_serialize(
  const onrobot_rg_msgs::msg::OnRobotRGInput & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gfof
  cdr << ros_message.gfof;
  // Member: ggwd
  cdr << ros_message.ggwd;
  // Member: gsta
  cdr << ros_message.gsta;
  // Member: gwdf
  cdr << ros_message.gwdf;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_onrobot_rg_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  onrobot_rg_msgs::msg::OnRobotRGInput & ros_message)
{
  // Member: gfof
  cdr >> ros_message.gfof;

  // Member: ggwd
  cdr >> ros_message.ggwd;

  // Member: gsta
  cdr >> ros_message.gsta;

  // Member: gwdf
  cdr >> ros_message.gwdf;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_onrobot_rg_msgs
get_serialized_size(
  const onrobot_rg_msgs::msg::OnRobotRGInput & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gfof
  {
    size_t item_size = sizeof(ros_message.gfof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ggwd
  {
    size_t item_size = sizeof(ros_message.ggwd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gsta
  {
    size_t item_size = sizeof(ros_message.gsta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gwdf
  {
    size_t item_size = sizeof(ros_message.gwdf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_onrobot_rg_msgs
max_serialized_size_OnRobotRGInput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: gfof
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ggwd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gsta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gwdf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = onrobot_rg_msgs::msg::OnRobotRGInput;
    is_plain =
      (
      offsetof(DataType, gwdf) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OnRobotRGInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const onrobot_rg_msgs::msg::OnRobotRGInput *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OnRobotRGInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<onrobot_rg_msgs::msg::OnRobotRGInput *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OnRobotRGInput__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const onrobot_rg_msgs::msg::OnRobotRGInput *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OnRobotRGInput__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OnRobotRGInput(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OnRobotRGInput__callbacks = {
  "onrobot_rg_msgs::msg",
  "OnRobotRGInput",
  _OnRobotRGInput__cdr_serialize,
  _OnRobotRGInput__cdr_deserialize,
  _OnRobotRGInput__get_serialized_size,
  _OnRobotRGInput__max_serialized_size
};

static rosidl_message_type_support_t _OnRobotRGInput__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OnRobotRGInput__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace onrobot_rg_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_onrobot_rg_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<onrobot_rg_msgs::msg::OnRobotRGInput>()
{
  return &onrobot_rg_msgs::msg::typesupport_fastrtps_cpp::_OnRobotRGInput__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, onrobot_rg_msgs, msg, OnRobotRGInput)() {
  return &onrobot_rg_msgs::msg::typesupport_fastrtps_cpp::_OnRobotRGInput__handle;
}

#ifdef __cplusplus
}
#endif
