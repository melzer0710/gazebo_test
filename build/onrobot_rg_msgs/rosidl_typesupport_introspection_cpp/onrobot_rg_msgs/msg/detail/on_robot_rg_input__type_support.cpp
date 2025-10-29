// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from onrobot_rg_msgs:msg/OnRobotRGInput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_input__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace onrobot_rg_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OnRobotRGInput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) onrobot_rg_msgs::msg::OnRobotRGInput(_init);
}

void OnRobotRGInput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<onrobot_rg_msgs::msg::OnRobotRGInput *>(message_memory);
  typed_message->~OnRobotRGInput();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OnRobotRGInput_message_member_array[4] = {
  {
    "gfof",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(onrobot_rg_msgs::msg::OnRobotRGInput, gfof),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ggwd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(onrobot_rg_msgs::msg::OnRobotRGInput, ggwd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gsta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(onrobot_rg_msgs::msg::OnRobotRGInput, gsta),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gwdf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(onrobot_rg_msgs::msg::OnRobotRGInput, gwdf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OnRobotRGInput_message_members = {
  "onrobot_rg_msgs::msg",  // message namespace
  "OnRobotRGInput",  // message name
  4,  // number of fields
  sizeof(onrobot_rg_msgs::msg::OnRobotRGInput),
  OnRobotRGInput_message_member_array,  // message members
  OnRobotRGInput_init_function,  // function to initialize message memory (memory has to be allocated)
  OnRobotRGInput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OnRobotRGInput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OnRobotRGInput_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace onrobot_rg_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<onrobot_rg_msgs::msg::OnRobotRGInput>()
{
  return &::onrobot_rg_msgs::msg::rosidl_typesupport_introspection_cpp::OnRobotRGInput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, onrobot_rg_msgs, msg, OnRobotRGInput)() {
  return &::onrobot_rg_msgs::msg::rosidl_typesupport_introspection_cpp::OnRobotRGInput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
