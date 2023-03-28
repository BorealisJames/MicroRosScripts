// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__STRUCT_H_
#define CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RCChannelMessage in the package custom_hydra_message.
typedef struct custom_hydra_message__msg__RCChannelMessage
{
  int16_t ch_1;
  int16_t ch_2;
  int16_t ch_3;
  int16_t ch_4;
  int16_t ch_5;
  int16_t ch_6;
} custom_hydra_message__msg__RCChannelMessage;

// Struct for a sequence of custom_hydra_message__msg__RCChannelMessage.
typedef struct custom_hydra_message__msg__RCChannelMessage__Sequence
{
  custom_hydra_message__msg__RCChannelMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_hydra_message__msg__RCChannelMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__STRUCT_H_
