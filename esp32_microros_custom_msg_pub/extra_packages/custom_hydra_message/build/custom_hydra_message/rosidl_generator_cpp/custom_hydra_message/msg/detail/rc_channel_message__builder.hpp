// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__BUILDER_HPP_
#define CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_hydra_message/msg/detail/rc_channel_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_hydra_message
{

namespace msg
{

namespace builder
{

class Init_RCChannelMessage_ch_6
{
public:
  explicit Init_RCChannelMessage_ch_6(::custom_hydra_message::msg::RCChannelMessage & msg)
  : msg_(msg)
  {}
  ::custom_hydra_message::msg::RCChannelMessage ch_6(::custom_hydra_message::msg::RCChannelMessage::_ch_6_type arg)
  {
    msg_.ch_6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_hydra_message::msg::RCChannelMessage msg_;
};

class Init_RCChannelMessage_ch_5
{
public:
  explicit Init_RCChannelMessage_ch_5(::custom_hydra_message::msg::RCChannelMessage & msg)
  : msg_(msg)
  {}
  Init_RCChannelMessage_ch_6 ch_5(::custom_hydra_message::msg::RCChannelMessage::_ch_5_type arg)
  {
    msg_.ch_5 = std::move(arg);
    return Init_RCChannelMessage_ch_6(msg_);
  }

private:
  ::custom_hydra_message::msg::RCChannelMessage msg_;
};

class Init_RCChannelMessage_ch_4
{
public:
  explicit Init_RCChannelMessage_ch_4(::custom_hydra_message::msg::RCChannelMessage & msg)
  : msg_(msg)
  {}
  Init_RCChannelMessage_ch_5 ch_4(::custom_hydra_message::msg::RCChannelMessage::_ch_4_type arg)
  {
    msg_.ch_4 = std::move(arg);
    return Init_RCChannelMessage_ch_5(msg_);
  }

private:
  ::custom_hydra_message::msg::RCChannelMessage msg_;
};

class Init_RCChannelMessage_ch_3
{
public:
  explicit Init_RCChannelMessage_ch_3(::custom_hydra_message::msg::RCChannelMessage & msg)
  : msg_(msg)
  {}
  Init_RCChannelMessage_ch_4 ch_3(::custom_hydra_message::msg::RCChannelMessage::_ch_3_type arg)
  {
    msg_.ch_3 = std::move(arg);
    return Init_RCChannelMessage_ch_4(msg_);
  }

private:
  ::custom_hydra_message::msg::RCChannelMessage msg_;
};

class Init_RCChannelMessage_ch_2
{
public:
  explicit Init_RCChannelMessage_ch_2(::custom_hydra_message::msg::RCChannelMessage & msg)
  : msg_(msg)
  {}
  Init_RCChannelMessage_ch_3 ch_2(::custom_hydra_message::msg::RCChannelMessage::_ch_2_type arg)
  {
    msg_.ch_2 = std::move(arg);
    return Init_RCChannelMessage_ch_3(msg_);
  }

private:
  ::custom_hydra_message::msg::RCChannelMessage msg_;
};

class Init_RCChannelMessage_ch_1
{
public:
  Init_RCChannelMessage_ch_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RCChannelMessage_ch_2 ch_1(::custom_hydra_message::msg::RCChannelMessage::_ch_1_type arg)
  {
    msg_.ch_1 = std::move(arg);
    return Init_RCChannelMessage_ch_2(msg_);
  }

private:
  ::custom_hydra_message::msg::RCChannelMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_hydra_message::msg::RCChannelMessage>()
{
  return custom_hydra_message::msg::builder::Init_RCChannelMessage_ch_1();
}

}  // namespace custom_hydra_message

#endif  // CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__BUILDER_HPP_
