// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_hydra_message/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "custom_hydra_message/msg/detail/rc_channel_message__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace custom_hydra_message
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_hydra_message
cdr_serialize(
  const custom_hydra_message::msg::RCChannelMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_hydra_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_hydra_message::msg::RCChannelMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_hydra_message
get_serialized_size(
  const custom_hydra_message::msg::RCChannelMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_hydra_message
max_serialized_size_RCChannelMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_hydra_message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_hydra_message
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_hydra_message, msg, RCChannelMessage)();

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
