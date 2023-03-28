// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__STRUCT_HPP_
#define CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_hydra_message__msg__RCChannelMessage __attribute__((deprecated))
#else
# define DEPRECATED__custom_hydra_message__msg__RCChannelMessage __declspec(deprecated)
#endif

namespace custom_hydra_message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RCChannelMessage_
{
  using Type = RCChannelMessage_<ContainerAllocator>;

  explicit RCChannelMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ch_1 = 0;
      this->ch_2 = 0;
      this->ch_3 = 0;
      this->ch_4 = 0;
      this->ch_5 = 0;
      this->ch_6 = 0;
    }
  }

  explicit RCChannelMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ch_1 = 0;
      this->ch_2 = 0;
      this->ch_3 = 0;
      this->ch_4 = 0;
      this->ch_5 = 0;
      this->ch_6 = 0;
    }
  }

  // field types and members
  using _ch_1_type =
    int16_t;
  _ch_1_type ch_1;
  using _ch_2_type =
    int16_t;
  _ch_2_type ch_2;
  using _ch_3_type =
    int16_t;
  _ch_3_type ch_3;
  using _ch_4_type =
    int16_t;
  _ch_4_type ch_4;
  using _ch_5_type =
    int16_t;
  _ch_5_type ch_5;
  using _ch_6_type =
    int16_t;
  _ch_6_type ch_6;

  // setters for named parameter idiom
  Type & set__ch_1(
    const int16_t & _arg)
  {
    this->ch_1 = _arg;
    return *this;
  }
  Type & set__ch_2(
    const int16_t & _arg)
  {
    this->ch_2 = _arg;
    return *this;
  }
  Type & set__ch_3(
    const int16_t & _arg)
  {
    this->ch_3 = _arg;
    return *this;
  }
  Type & set__ch_4(
    const int16_t & _arg)
  {
    this->ch_4 = _arg;
    return *this;
  }
  Type & set__ch_5(
    const int16_t & _arg)
  {
    this->ch_5 = _arg;
    return *this;
  }
  Type & set__ch_6(
    const int16_t & _arg)
  {
    this->ch_6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_hydra_message__msg__RCChannelMessage
    std::shared_ptr<custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_hydra_message__msg__RCChannelMessage
    std::shared_ptr<custom_hydra_message::msg::RCChannelMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RCChannelMessage_ & other) const
  {
    if (this->ch_1 != other.ch_1) {
      return false;
    }
    if (this->ch_2 != other.ch_2) {
      return false;
    }
    if (this->ch_3 != other.ch_3) {
      return false;
    }
    if (this->ch_4 != other.ch_4) {
      return false;
    }
    if (this->ch_5 != other.ch_5) {
      return false;
    }
    if (this->ch_6 != other.ch_6) {
      return false;
    }
    return true;
  }
  bool operator!=(const RCChannelMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RCChannelMessage_

// alias to use template instance with default allocator
using RCChannelMessage =
  custom_hydra_message::msg::RCChannelMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_hydra_message

#endif  // CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__STRUCT_HPP_
