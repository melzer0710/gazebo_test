// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from onrobot_rg_msgs:srv/GripperPose.idl
// generated code does not contain a copyright notice

#ifndef ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__STRUCT_HPP_
#define ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'known'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__onrobot_rg_msgs__srv__GripperPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__onrobot_rg_msgs__srv__GripperPose_Request __declspec(deprecated)
#endif

namespace onrobot_rg_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperPose_Request_
{
  using Type = GripperPose_Request_<ContainerAllocator>;

  explicit GripperPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : known(_init)
  {
    (void)_init;
  }

  explicit GripperPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : known(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _known_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _known_type known;

  // setters for named parameter idiom
  Type & set__known(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->known = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__onrobot_rg_msgs__srv__GripperPose_Request
    std::shared_ptr<onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__onrobot_rg_msgs__srv__GripperPose_Request
    std::shared_ptr<onrobot_rg_msgs::srv::GripperPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperPose_Request_ & other) const
  {
    if (this->known != other.known) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperPose_Request_

// alias to use template instance with default allocator
using GripperPose_Request =
  onrobot_rg_msgs::srv::GripperPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace onrobot_rg_msgs


// Include directives for member types
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__onrobot_rg_msgs__srv__GripperPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__onrobot_rg_msgs__srv__GripperPose_Response __declspec(deprecated)
#endif

namespace onrobot_rg_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperPose_Response_
{
  using Type = GripperPose_Response_<ContainerAllocator>;

  explicit GripperPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit GripperPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__onrobot_rg_msgs__srv__GripperPose_Response
    std::shared_ptr<onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__onrobot_rg_msgs__srv__GripperPose_Response
    std::shared_ptr<onrobot_rg_msgs::srv::GripperPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperPose_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperPose_Response_

// alias to use template instance with default allocator
using GripperPose_Response =
  onrobot_rg_msgs::srv::GripperPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace onrobot_rg_msgs

namespace onrobot_rg_msgs
{

namespace srv
{

struct GripperPose
{
  using Request = onrobot_rg_msgs::srv::GripperPose_Request;
  using Response = onrobot_rg_msgs::srv::GripperPose_Response;
};

}  // namespace srv

}  // namespace onrobot_rg_msgs

#endif  // ONROBOT_RG_MSGS__SRV__DETAIL__GRIPPER_POSE__STRUCT_HPP_
