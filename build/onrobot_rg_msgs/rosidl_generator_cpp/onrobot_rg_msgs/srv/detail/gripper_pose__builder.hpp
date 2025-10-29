// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from onrobot_rg_msgs:srv/GripperPose.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__BUILDER_HPP_
#define ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "onrobot_rg_msgs/srv/detail/gripper_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace onrobot_rg_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperPose_Request_known
{
public:
  Init_GripperPose_Request_known()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::onrobot_rg_msgs::srv::GripperPose_Request known(::onrobot_rg_msgs::srv::GripperPose_Request::_known_type arg)
  {
    msg_.known = std::move(arg);
    return std::move(msg_);
  }

private:
  ::onrobot_rg_msgs::srv::GripperPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::onrobot_rg_msgs::srv::GripperPose_Request>()
{
  return onrobot_rg_msgs::srv::builder::Init_GripperPose_Request_known();
}

}  // namespace onrobot_rg_msgs


namespace onrobot_rg_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperPose_Response_pose
{
public:
  Init_GripperPose_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::onrobot_rg_msgs::srv::GripperPose_Response pose(::onrobot_rg_msgs::srv::GripperPose_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::onrobot_rg_msgs::srv::GripperPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::onrobot_rg_msgs::srv::GripperPose_Response>()
{
  return onrobot_rg_msgs::srv::builder::Init_GripperPose_Response_pose();
}

}  // namespace onrobot_rg_msgs

#endif  // ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__BUILDER_HPP_
