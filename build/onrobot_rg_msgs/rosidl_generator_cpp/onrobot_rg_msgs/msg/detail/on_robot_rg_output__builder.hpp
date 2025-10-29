// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from onrobot_rg_msgs:msg/OnRobotRGOutput.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_OUTPUT__BUILDER_HPP_
#define ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "onrobot_rg_msgs/msg/detail/on_robot_rg_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace onrobot_rg_msgs
{

namespace msg
{

namespace builder
{

class Init_OnRobotRGOutput_rctr
{
public:
  explicit Init_OnRobotRGOutput_rctr(::onrobot_rg_msgs::msg::OnRobotRGOutput & msg)
  : msg_(msg)
  {}
  ::onrobot_rg_msgs::msg::OnRobotRGOutput rctr(::onrobot_rg_msgs::msg::OnRobotRGOutput::_rctr_type arg)
  {
    msg_.rctr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::onrobot_rg_msgs::msg::OnRobotRGOutput msg_;
};

class Init_OnRobotRGOutput_rgwd
{
public:
  explicit Init_OnRobotRGOutput_rgwd(::onrobot_rg_msgs::msg::OnRobotRGOutput & msg)
  : msg_(msg)
  {}
  Init_OnRobotRGOutput_rctr rgwd(::onrobot_rg_msgs::msg::OnRobotRGOutput::_rgwd_type arg)
  {
    msg_.rgwd = std::move(arg);
    return Init_OnRobotRGOutput_rctr(msg_);
  }

private:
  ::onrobot_rg_msgs::msg::OnRobotRGOutput msg_;
};

class Init_OnRobotRGOutput_rgfr
{
public:
  Init_OnRobotRGOutput_rgfr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OnRobotRGOutput_rgwd rgfr(::onrobot_rg_msgs::msg::OnRobotRGOutput::_rgfr_type arg)
  {
    msg_.rgfr = std::move(arg);
    return Init_OnRobotRGOutput_rgwd(msg_);
  }

private:
  ::onrobot_rg_msgs::msg::OnRobotRGOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::onrobot_rg_msgs::msg::OnRobotRGOutput>()
{
  return onrobot_rg_msgs::msg::builder::Init_OnRobotRGOutput_rgfr();
}

}  // namespace onrobot_rg_msgs

#endif  // ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_OUTPUT__BUILDER_HPP_
