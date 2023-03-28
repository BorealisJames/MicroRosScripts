// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
// generated code does not contain a copyright notice
#include "custom_hydra_message/msg/detail/rc_channel_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_hydra_message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_hydra_message/msg/detail/rc_channel_message__struct.h"
#include "custom_hydra_message/msg/detail/rc_channel_message__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RCChannelMessage__ros_msg_type = custom_hydra_message__msg__RCChannelMessage;

static bool _RCChannelMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RCChannelMessage__ros_msg_type * ros_message = static_cast<const _RCChannelMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: ch_1
  {
    cdr << ros_message->ch_1;
  }

  // Field name: ch_2
  {
    cdr << ros_message->ch_2;
  }

  // Field name: ch_3
  {
    cdr << ros_message->ch_3;
  }

  // Field name: ch_4
  {
    cdr << ros_message->ch_4;
  }

  // Field name: ch_5
  {
    cdr << ros_message->ch_5;
  }

  // Field name: ch_6
  {
    cdr << ros_message->ch_6;
  }

  return true;
}

static bool _RCChannelMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RCChannelMessage__ros_msg_type * ros_message = static_cast<_RCChannelMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: ch_1
  {
    cdr >> ros_message->ch_1;
  }

  // Field name: ch_2
  {
    cdr >> ros_message->ch_2;
  }

  // Field name: ch_3
  {
    cdr >> ros_message->ch_3;
  }

  // Field name: ch_4
  {
    cdr >> ros_message->ch_4;
  }

  // Field name: ch_5
  {
    cdr >> ros_message->ch_5;
  }

  // Field name: ch_6
  {
    cdr >> ros_message->ch_6;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_hydra_message
size_t get_serialized_size_custom_hydra_message__msg__RCChannelMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RCChannelMessage__ros_msg_type * ros_message = static_cast<const _RCChannelMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ch_1
  {
    size_t item_size = sizeof(ros_message->ch_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_2
  {
    size_t item_size = sizeof(ros_message->ch_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_3
  {
    size_t item_size = sizeof(ros_message->ch_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_4
  {
    size_t item_size = sizeof(ros_message->ch_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_5
  {
    size_t item_size = sizeof(ros_message->ch_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ch_6
  {
    size_t item_size = sizeof(ros_message->ch_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RCChannelMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_hydra_message__msg__RCChannelMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_hydra_message
size_t max_serialized_size_custom_hydra_message__msg__RCChannelMessage(
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

  // member: ch_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ch_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ch_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ch_4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ch_5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ch_6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RCChannelMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_hydra_message__msg__RCChannelMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RCChannelMessage = {
  "custom_hydra_message::msg",
  "RCChannelMessage",
  _RCChannelMessage__cdr_serialize,
  _RCChannelMessage__cdr_deserialize,
  _RCChannelMessage__get_serialized_size,
  _RCChannelMessage__max_serialized_size
};

static rosidl_message_type_support_t _RCChannelMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RCChannelMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_hydra_message, msg, RCChannelMessage)() {
  return &_RCChannelMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
