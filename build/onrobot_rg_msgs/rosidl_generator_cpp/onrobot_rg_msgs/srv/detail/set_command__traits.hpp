// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from onrobot_rg_msgs:srv/SetCommand.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__TRAITS_HPP_
#define ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "onrobot_rg_msgs/srv/detail/set_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace onrobot_rg_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCommand_Request & msg, bool use_flow_style = false)
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
  const onrobot_rg_msgs::srv::SetCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  onrobot_rg_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use onrobot_rg_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const onrobot_rg_msgs::srv::SetCommand_Request & msg)
{
  return onrobot_rg_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<onrobot_rg_msgs::srv::SetCommand_Request>()
{
  return "onrobot_rg_msgs::srv::SetCommand_Request";
}

template<>
inline const char * name<onrobot_rg_msgs::srv::SetCommand_Request>()
{
  return "onrobot_rg_msgs/srv/SetCommand_Request";
}

template<>
struct has_fixed_size<onrobot_rg_msgs::srv::SetCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<onrobot_rg_msgs::srv::SetCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<onrobot_rg_msgs::srv::SetCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace onrobot_rg_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCommand_Response & msg, bool use_flow_style = false)
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
  const onrobot_rg_msgs::srv::SetCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  onrobot_rg_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use onrobot_rg_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const onrobot_rg_msgs::srv::SetCommand_Response & msg)
{
  return onrobot_rg_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<onrobot_rg_msgs::srv::SetCommand_Response>()
{
  return "onrobot_rg_msgs::srv::SetCommand_Response";
}

template<>
inline const char * name<onrobot_rg_msgs::srv::SetCommand_Response>()
{
  return "onrobot_rg_msgs/srv/SetCommand_Response";
}

template<>
struct has_fixed_size<onrobot_rg_msgs::srv::SetCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<onrobot_rg_msgs::srv::SetCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<onrobot_rg_msgs::srv::SetCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<onrobot_rg_msgs::srv::SetCommand>()
{
  return "onrobot_rg_msgs::srv::SetCommand";
}

template<>
inline const char * name<onrobot_rg_msgs::srv::SetCommand>()
{
  return "onrobot_rg_msgs/srv/SetCommand";
}

template<>
struct has_fixed_size<onrobot_rg_msgs::srv::SetCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<onrobot_rg_msgs::srv::SetCommand_Request>::value &&
    has_fixed_size<onrobot_rg_msgs::srv::SetCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<onrobot_rg_msgs::srv::SetCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<onrobot_rg_msgs::srv::SetCommand_Request>::value &&
    has_bounded_size<onrobot_rg_msgs::srv::SetCommand_Response>::value
  >
{
};

template<>
struct is_service<onrobot_rg_msgs::srv::SetCommand>
  : std::true_type
{
};

template<>
struct is_service_request<onrobot_rg_msgs::srv::SetCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<onrobot_rg_msgs::srv::SetCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ONROBOT_RG_MSGS__SRV__DETAIL__SET_COMMAND__TRAITS_HPP_
