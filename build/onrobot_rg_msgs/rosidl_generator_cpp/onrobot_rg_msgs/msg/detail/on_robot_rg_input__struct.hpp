// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from onrobot_rg_msgs:msg/OnRobotRGInput.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__STRUCT_HPP_
#define ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__onrobot_rg_msgs__msg__OnRobotRGInput __attribute__((deprecated))
#else
# define DEPRECATED__onrobot_rg_msgs__msg__OnRobotRGInput __declspec(deprecated)
#endif

namespace onrobot_rg_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OnRobotRGInput_
{
  using Type = OnRobotRGInput_<ContainerAllocator>;

  explicit OnRobotRGInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gfof = 0;
      this->ggwd = 0;
      this->gsta = 0;
      this->gwdf = 0;
    }
  }

  explicit OnRobotRGInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gfof = 0;
      this->ggwd = 0;
      this->gsta = 0;
      this->gwdf = 0;
    }
  }

  // field types and members
  using _gfof_type =
    uint16_t;
  _gfof_type gfof;
  using _ggwd_type =
    uint16_t;
  _ggwd_type ggwd;
  using _gsta_type =
    uint8_t;
  _gsta_type gsta;
  using _gwdf_type =
    uint16_t;
  _gwdf_type gwdf;

  // setters for named parameter idiom
  Type & set__gfof(
    const uint16_t & _arg)
  {
    this->gfof = _arg;
    return *this;
  }
  Type & set__ggwd(
    const uint16_t & _arg)
  {
    this->ggwd = _arg;
    return *this;
  }
  Type & set__gsta(
    const uint8_t & _arg)
  {
    this->gsta = _arg;
    return *this;
  }
  Type & set__gwdf(
    const uint16_t & _arg)
  {
    this->gwdf = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__onrobot_rg_msgs__msg__OnRobotRGInput
    std::shared_ptr<onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__onrobot_rg_msgs__msg__OnRobotRGInput
    std::shared_ptr<onrobot_rg_msgs::msg::OnRobotRGInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OnRobotRGInput_ & other) const
  {
    if (this->gfof != other.gfof) {
      return false;
    }
    if (this->ggwd != other.ggwd) {
      return false;
    }
    if (this->gsta != other.gsta) {
      return false;
    }
    if (this->gwdf != other.gwdf) {
      return false;
    }
    return true;
  }
  bool operator!=(const OnRobotRGInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OnRobotRGInput_

// alias to use template instance with default allocator
using OnRobotRGInput =
  onrobot_rg_msgs::msg::OnRobotRGInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace onrobot_rg_msgs

#endif  // ONROBOT_RG_MSGS__MSG__DETAIL__ON_ROBOT_RG_INPUT__STRUCT_HPP_
