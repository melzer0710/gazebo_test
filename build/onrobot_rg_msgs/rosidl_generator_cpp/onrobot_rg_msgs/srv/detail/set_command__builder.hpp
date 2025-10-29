// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from onrobot_rg_msgs:srv/SetCommand.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__BUILDER_HPP_
#define ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "onrobot_rg_msgs/srv/detail/set_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace onrobot_rg_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCommand_Request_command
{
public:
  Init_SetCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::onrobot_rg_msgs::srv::SetCommand_Request command(::onrobot_rg_msgs::srv::SetCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::onrobot_rg_msgs::srv::SetCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::onrobot_rg_msgs::srv::SetCommand_Request>()
{
  return onrobot_rg_msgs::srv::builder::Init_SetCommand_Request_command();
}

}  // namespace onrobot_rg_msgs


namespace onrobot_rg_msgs
{

namespace srv
{

namespace builder
{

class Init_SetCommand_Response_message
{
public:
  explicit Init_SetCommand_Response_message(::onrobot_rg_msgs::srv::SetCommand_Response & msg)
  : msg_(msg)
  {}
  ::onrobot_rg_msgs::srv::SetCommand_Response message(::onrobot_rg_msgs::srv::SetCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::onrobot_rg_msgs::srv::SetCommand_Response msg_;
};

class Init_SetCommand_Response_success
{
public:
  Init_SetCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCommand_Response_message success(::onrobot_rg_msgs::srv::SetCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetCommand_Response_message(msg_);
  }

private:
  ::onrobot_rg_msgs::srv::SetCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::onrobot_rg_msgs::srv::SetCommand_Response>()
{
  return onrobot_rg_msgs::srv::builder::Init_SetCommand_Response_success();
}

}  // namespace onrobot_rg_msgs

#endif  // ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__BUILDER_HPP_
