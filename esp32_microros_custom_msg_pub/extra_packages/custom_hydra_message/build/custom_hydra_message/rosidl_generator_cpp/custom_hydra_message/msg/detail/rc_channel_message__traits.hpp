// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__TRAITS_HPP_
#define CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_hydra_message/msg/detail/rc_channel_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_hydra_message
{

namespace msg
{

inline void to_flow_style_yaml(
  const RCChannelMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: ch_1
  {
    out << "ch_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_1, out);
    out << ", ";
  }

  // member: ch_2
  {
    out << "ch_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_2, out);
    out << ", ";
  }

  // member: ch_3
  {
    out << "ch_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_3, out);
    out << ", ";
  }

  // member: ch_4
  {
    out << "ch_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_4, out);
    out << ", ";
  }

  // member: ch_5
  {
    out << "ch_5: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_5, out);
    out << ", ";
  }

  // member: ch_6
  {
    out << "ch_6: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RCChannelMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ch_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_1: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_1, out);
    out << "\n";
  }

  // member: ch_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_2: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_2, out);
    out << "\n";
  }

  // member: ch_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_3: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_3, out);
    out << "\n";
  }

  // member: ch_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_4: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_4, out);
    out << "\n";
  }

  // member: ch_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_5: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_5, out);
    out << "\n";
  }

  // member: ch_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ch_6: ";
    rosidl_generator_traits::value_to_yaml(msg.ch_6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RCChannelMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_hydra_message

namespace rosidl_generator_traits
{

[[deprecated("use custom_hydra_message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_hydra_message::msg::RCChannelMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_hydra_message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_hydra_message::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_hydra_message::msg::RCChannelMessage & msg)
{
  return custom_hydra_message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_hydra_message::msg::RCChannelMessage>()
{
  return "custom_hydra_message::msg::RCChannelMessage";
}

template<>
inline const char * name<custom_hydra_message::msg::RCChannelMessage>()
{
  return "custom_hydra_message/msg/RCChannelMessage";
}

template<>
struct has_fixed_size<custom_hydra_message::msg::RCChannelMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_hydra_message::msg::RCChannelMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_hydra_message::msg::RCChannelMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_HYDRA_MESSAGE__MSG__DETAIL__RC_CHANNEL_MESSAGE__TRAITS_HPP_
