// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ap_interfaces:msg\Score.idl
// generated code does not contain a copyright notice
#include "ap_interfaces/msg/detail/score__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ap_interfaces/msg/detail/score__struct.hpp"

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

namespace ap_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ap_interfaces
cdr_serialize(
  const ap_interfaces::msg::Score & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: player_score
  {
    cdr << ros_message.player_score;
  }
  // Member: game_score
  {
    cdr << ros_message.game_score;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ap_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ap_interfaces::msg::Score & ros_message)
{
  // Member: player_score
  {
    cdr >> ros_message.player_score;
  }

  // Member: game_score
  {
    cdr >> ros_message.game_score;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ap_interfaces
get_serialized_size(
  const ap_interfaces::msg::Score & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: player_score
  {
    size_t array_size = 18;
    size_t item_size = sizeof(ros_message.player_score[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: game_score
  {
    size_t array_size = 18;
    size_t item_size = sizeof(ros_message.game_score[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ap_interfaces
max_serialized_size_Score(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: player_score
  {
    size_t array_size = 18;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: game_score
  {
    size_t array_size = 18;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Score__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ap_interfaces::msg::Score *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Score__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ap_interfaces::msg::Score *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Score__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ap_interfaces::msg::Score *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Score__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Score(full_bounded, 0);
}

static message_type_support_callbacks_t _Score__callbacks = {
  "ap_interfaces::msg",
  "Score",
  _Score__cdr_serialize,
  _Score__cdr_deserialize,
  _Score__get_serialized_size,
  _Score__max_serialized_size
};

static rosidl_message_type_support_t _Score__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Score__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ap_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ap_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<ap_interfaces::msg::Score>()
{
  return &ap_interfaces::msg::typesupport_fastrtps_cpp::_Score__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ap_interfaces, msg, Score)() {
  return &ap_interfaces::msg::typesupport_fastrtps_cpp::_Score__handle;
}

#ifdef __cplusplus
}
#endif