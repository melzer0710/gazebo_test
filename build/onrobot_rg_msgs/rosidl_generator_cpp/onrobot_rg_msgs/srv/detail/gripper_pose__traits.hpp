// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from onrobot_rg_msgs:srv/GripperPose.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__TRAITS_HPP_
#define ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "onrobot_rg_msgs/srv/detail/gripper_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'known'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace onrobot_rg_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: known
  {
    out << "known: ";
    to_flow_style_yaml(msg.known, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: known
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "known:\n";
    to_block_style_yaml(msg.known, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperPose_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace onrobot_rg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use onrobot_rg_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const onrobot_rg_msgs::srv::GripperPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  onrobot_rg_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use onrobot_rg_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const onrobot_rg_msgs::srv::GripperPose_Request & msg)
{
  return onrobot_rg_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<onrobot_rg_msgs::srv::GripperPose_Request>()
{
  return "onrobot_rg_msgs::srv::GripperPose_Request";
}

template<>
inline const char * name<onrobot_rg_msgs::srv::GripperPose_Request>()
{
  return "onrobot_rg_msgs/srv/GripperPose_Request";
}

template<>
struct has_fixed_size<onrobot_rg_msgs::srv::GripperPose_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<onrobot_rg_msgs::srv::GripperPose_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<onrobot_rg_msgs::srv::GripperPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace onrobot_rg_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperPose_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace onrobot_rg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use onrobot_rg_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const onrobot_rg_msgs::srv::GripperPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  onrobot_rg_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use onrobot_rg_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const onrobot_rg_msgs::srv::GripperPose_Response & msg)
{
  return onrobot_rg_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<onrobot_rg_msgs::srv::GripperPose_Response>()
{
  return "onrobot_rg_msgs::srv::GripperPose_Response";
}

template<>
inline const char * name<onrobot_rg_msgs::srv::GripperPose_Response>()
{
  return "onrobot_rg_msgs/srv/GripperPose_Response";
}

template<>
struct has_fixed_size<onrobot_rg_msgs::srv::GripperPose_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<onrobot_rg_msgs::srv::GripperPose_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<onrobot_rg_msgs::srv::GripperPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<onrobot_rg_msgs::srv::GripperPose>()
{
  return "onrobot_rg_msgs::srv::GripperPose";
}

template<>
inline const char * name<onrobot_rg_msgs::srv::GripperPose>()
{
  return "onrobot_rg_msgs/srv/GripperPose";
}

template<>
struct has_fixed_size<onrobot_rg_msgs::srv::GripperPose>
  : std::integral_constant<
    bool,
    has_fixed_size<onrobot_rg_msgs::srv::GripperPose_Request>::value &&
    has_fixed_size<onrobot_rg_msgs::srv::GripperPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<onrobot_rg_msgs::srv::GripperPose>
  : std::integral_constant<
    bool,
    has_bounded_size<onrobot_rg_msgs::srv::GripperPose_Request>::value &&
    has_bounded_size<onrobot_rg_msgs::srv::GripperPose_Response>::value
  >
{
};

template<>
struct is_service<onrobot_rg_msgs::srv::GripperPose>
  : std::true_type
{
};

template<>
struct is_service_request<onrobot_rg_msgs::srv::GripperPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<onrobot_rg_msgs::srv::GripperPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__TRAITS_HPP_
