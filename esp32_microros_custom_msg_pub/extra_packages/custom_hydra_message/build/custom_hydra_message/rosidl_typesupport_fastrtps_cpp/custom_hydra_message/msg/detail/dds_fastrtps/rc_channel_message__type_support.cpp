// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
// generated code does not contain a copyright notice
#include "custom_hydra_message/msg/detail/rc_channel_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_hydra_message/msg/detail/rc_channel_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ch_1
  cdr << ros_message.ch_1;
  // Member: ch_2
  cdr << ros_message.ch_2;
  // Member: ch_3
  cdr << ros_message.ch_3;
  // Member: ch_4
  cdr << ros_message.ch_4;
  // Member: ch_5
  cdr << ros_message.ch_5;
  // Member: ch_6
  cdr << ros_message.ch_6;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_hydra_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_hydra_message::msg::RCChannelMessage & ros_message)
{
  // Member: ch_1
  cdr >> ros_message.ch_1;

  // Member: ch_2
  cdr >> ros_message.ch_2;

  // Member: ch_3
  cdr >> ros_message.ch_3;

  // Member: ch_4
  cdr >> ros_message.ch_4;

  // Member: ch_5
  cdr >> ros_message.ch_5;

  // Member: ch_6
  cdr >> ros_message.ch_6;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_hydra_message
get_serialized_size(
  const custom_hydra_message::msg::RCChannelMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ch_1
  {
    size_t item_size = sizeof(ros_message.ch_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ch_2
  {
    size_t item_size = sizeof(ros_message.ch_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ch_3
  {
    size_t item_size = sizeof(ros_message.ch_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ch_4
  {
    size_t item_size = sizeof(ros_message.ch_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ch_5
  {
    size_t item_size = sizeof(ros_message.ch_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ch_6
  {
    size_t item_size = sizeof(ros_message.ch_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_hydra_message
max_serialized_size_RCChannelMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: ch_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ch_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ch_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ch_4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ch_5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ch_6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RCChannelMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_hydra_message::msg::RCChannelMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RCChannelMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_hydra_message::msg::RCChannelMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RCChannelMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_hydra_message::msg::RCChannelMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RCChannelMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RCChannelMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RCChannelMessage__callbacks = {
  "custom_hydra_message::msg",
  "RCChannelMessage",
  _RCChannelMessage__cdr_serialize,
  _RCChannelMessage__cdr_deserialize,
  _RCChannelMessage__get_serialized_size,
  _RCChannelMessage__max_serialized_size
};

static rosidl_message_type_support_t _RCChannelMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RCChannelMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_hydra_message

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_hydra_message
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_hydra_message::msg::RCChannelMessage>()
{
  return &custom_hydra_message::msg::typesupport_fastrtps_cpp::_RCChannelMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_hydra_message, msg, RCChannelMessage)() {
  return &custom_hydra_message::msg::typesupport_fastrtps_cpp::_RCChannelMessage__handle;
}

#ifdef __cplusplus
}
#endif
