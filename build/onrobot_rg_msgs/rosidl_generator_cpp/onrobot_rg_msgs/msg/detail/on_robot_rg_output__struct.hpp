// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from onrobot_rg_msgs:msg/OnRobotRGOutput.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_OUTPUT__STRUCT_HPP_
#define ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_OUTPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__onrobot_rg_msgs__msg__OnRobotRGOutput __attribute__((deprecated))
#else
# define DEPRECATED__onrobot_rg_msgs__msg__OnRobotRGOutput __declspec(deprecated)
#endif

namespace onrobot_rg_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OnRobotRGOutput_
{
  using Type = OnRobotRGOutput_<ContainerAllocator>;

  explicit OnRobotRGOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rgfr = 0;
      this->rgwd = 0;
      this->rctr = 0;
    }
  }

  explicit OnRobotRGOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rgfr = 0;
      this->rgwd = 0;
      this->rctr = 0;
    }
  }

  // field types and members
  using _rgfr_type =
    uint16_t;
  _rgfr_type rgfr;
  using _rgwd_type =
    uint16_t;
  _rgwd_type rgwd;
  using _rctr_type =
    uint8_t;
  _rctr_type rctr;

  // setters for named parameter idiom
  Type & set__rgfr(
    const uint16_t & _arg)
  {
    this->rgfr = _arg;
    return *this;
  }
  Type & set__rgwd(
    const uint16_t & _arg)
  {
    this->rgwd = _arg;
    return *this;
  }
  Type & set__rctr(
    const uint8_t & _arg)
  {
    this->rctr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__onrobot_rg_msgs__msg__OnRobotRGOutput
    std::shared_ptr<onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__onrobot_rg_msgs__msg__OnRobotRGOutput
    std::shared_ptr<onrobot_rg_msgs::msg::OnRobotRGOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OnRobotRGOutput_ & other) const
  {
    if (this->rgfr != other.rgfr) {
      return false;
    }
    if (this->rgwd != other.rgwd) {
      return false;
    }
    if (this->rctr != other.rctr) {
      return false;
    }
    return true;
  }
  bool operator!=(const OnRobotRGOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OnRobotRGOutput_

// alias to use template instance with default allocator
using OnRobotRGOutput =
  onrobot_rg_msgs::msg::OnRobotRGOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace onrobot_rg_msgs

#endif  // ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_OUTPUT__STRUCT_HPP_
