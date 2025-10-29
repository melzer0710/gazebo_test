// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from onrobot_rg_msgs:msg/OnRobotRGInput.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__BUILDER_HPP_
#define ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "onrobot_rg_msgs/msg/detail/on_robot_rg_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace onrobot_rg_msgs
{

namespace msg
{

namespace builder
{

class Init_OnRobotRGInput_gwdf
{
public:
  explicit Init_OnRobotRGInput_gwdf(::onrobot_rg_msgs::msg::OnRobotRGInput & msg)
  : msg_(msg)
  {}
  ::onrobot_rg_msgs::msg::OnRobotRGInput gwdf(::onrobot_rg_msgs::msg::OnRobotRGInput::_gwdf_type arg)
  {
    msg_.gwdf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::onrobot_rg_msgs::msg::OnRobotRGInput msg_;
};

class Init_OnRobotRGInput_gsta
{
public:
  explicit Init_OnRobotRGInput_gsta(::onrobot_rg_msgs::msg::OnRobotRGInput & msg)
  : msg_(msg)
  {}
  Init_OnRobotRGInput_gwdf gsta(::onrobot_rg_msgs::msg::OnRobotRGInput::_gsta_type arg)
  {
    msg_.gsta = std::move(arg);
    return Init_OnRobotRGInput_gwdf(msg_);
  }

private:
  ::onrobot_rg_msgs::msg::OnRobotRGInput msg_;
};

class Init_OnRobotRGInput_ggwd
{
public:
  explicit Init_OnRobotRGInput_ggwd(::onrobot_rg_msgs::msg::OnRobotRGInput & msg)
  : msg_(msg)
  {}
  Init_OnRobotRGInput_gsta ggwd(::onrobot_rg_msgs::msg::OnRobotRGInput::_ggwd_type arg)
  {
    msg_.ggwd = std::move(arg);
    return Init_OnRobotRGInput_gsta(msg_);
  }

private:
  ::onrobot_rg_msgs::msg::OnRobotRGInput msg_;
};

class Init_OnRobotRGInput_gfof
{
public:
  Init_OnRobotRGInput_gfof()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OnRobotRGInput_ggwd gfof(::onrobot_rg_msgs::msg::OnRobotRGInput::_gfof_type arg)
  {
    msg_.gfof = std::move(arg);
    return Init_OnRobotRGInput_ggwd(msg_);
  }

private:
  ::onrobot_rg_msgs::msg::OnRobotRGInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::onrobot_rg_msgs::msg::OnRobotRGInput>()
{
  return onrobot_rg_msgs::msg::builder::Init_OnRobotRGInput_gfof();
}

}  // namespace onrobot_rg_msgs

#endif  // ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__BUILDER_HPP_
