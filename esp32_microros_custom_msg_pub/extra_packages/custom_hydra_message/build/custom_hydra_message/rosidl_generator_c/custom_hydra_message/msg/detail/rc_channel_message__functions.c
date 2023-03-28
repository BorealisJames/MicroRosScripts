// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
// generated code does not contain a copyright notice
#include "custom_hydra_message/msg/detail/rc_channel_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_hydra_message__msg__RCChannelMessage__init(custom_hydra_message__msg__RCChannelMessage * msg)
{
  if (!msg) {
    return false;
  }
  // ch_1
  // ch_2
  // ch_3
  // ch_4
  // ch_5
  // ch_6
  return true;
}

void
custom_hydra_message__msg__RCChannelMessage__fini(custom_hydra_message__msg__RCChannelMessage * msg)
{
  if (!msg) {
    return;
  }
  // ch_1
  // ch_2
  // ch_3
  // ch_4
  // ch_5
  // ch_6
}

bool
custom_hydra_message__msg__RCChannelMessage__are_equal(const custom_hydra_message__msg__RCChannelMessage * lhs, const custom_hydra_message__msg__RCChannelMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ch_1
  if (lhs->ch_1 != rhs->ch_1) {
    return false;
  }
  // ch_2
  if (lhs->ch_2 != rhs->ch_2) {
    return false;
  }
  // ch_3
  if (lhs->ch_3 != rhs->ch_3) {
    return false;
  }
  // ch_4
  if (lhs->ch_4 != rhs->ch_4) {
    return false;
  }
  // ch_5
  if (lhs->ch_5 != rhs->ch_5) {
    return false;
  }
  // ch_6
  if (lhs->ch_6 != rhs->ch_6) {
    return false;
  }
  return true;
}

bool
custom_hydra_message__msg__RCChannelMessage__copy(
  const custom_hydra_message__msg__RCChannelMessage * input,
  custom_hydra_message__msg__RCChannelMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // ch_1
  output->ch_1 = input->ch_1;
  // ch_2
  output->ch_2 = input->ch_2;
  // ch_3
  output->ch_3 = input->ch_3;
  // ch_4
  output->ch_4 = input->ch_4;
  // ch_5
  output->ch_5 = input->ch_5;
  // ch_6
  output->ch_6 = input->ch_6;
  return true;
}

custom_hydra_message__msg__RCChannelMessage *
custom_hydra_message__msg__RCChannelMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_hydra_message__msg__RCChannelMessage * msg = (custom_hydra_message__msg__RCChannelMessage *)allocator.allocate(sizeof(custom_hydra_message__msg__RCChannelMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_hydra_message__msg__RCChannelMessage));
  bool success = custom_hydra_message__msg__RCChannelMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_hydra_message__msg__RCChannelMessage__destroy(custom_hydra_message__msg__RCChannelMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_hydra_message__msg__RCChannelMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_hydra_message__msg__RCChannelMessage__Sequence__init(custom_hydra_message__msg__RCChannelMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_hydra_message__msg__RCChannelMessage * data = NULL;

  if (size) {
    data = (custom_hydra_message__msg__RCChannelMessage *)allocator.zero_allocate(size, sizeof(custom_hydra_message__msg__RCChannelMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_hydra_message__msg__RCChannelMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_hydra_message__msg__RCChannelMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_hydra_message__msg__RCChannelMessage__Sequence__fini(custom_hydra_message__msg__RCChannelMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_hydra_message__msg__RCChannelMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_hydra_message__msg__RCChannelMessage__Sequence *
custom_hydra_message__msg__RCChannelMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_hydra_message__msg__RCChannelMessage__Sequence * array = (custom_hydra_message__msg__RCChannelMessage__Sequence *)allocator.allocate(sizeof(custom_hydra_message__msg__RCChannelMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_hydra_message__msg__RCChannelMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_hydra_message__msg__RCChannelMessage__Sequence__destroy(custom_hydra_message__msg__RCChannelMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_hydra_message__msg__RCChannelMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_hydra_message__msg__RCChannelMessage__Sequence__are_equal(const custom_hydra_message__msg__RCChannelMessage__Sequence * lhs, const custom_hydra_message__msg__RCChannelMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_hydra_message__msg__RCChannelMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_hydra_message__msg__RCChannelMessage__Sequence__copy(
  const custom_hydra_message__msg__RCChannelMessage__Sequence * input,
  custom_hydra_message__msg__RCChannelMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_hydra_message__msg__RCChannelMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_hydra_message__msg__RCChannelMessage * data =
      (custom_hydra_message__msg__RCChannelMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_hydra_message__msg__RCChannelMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_hydra_message__msg__RCChannelMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_hydra_message__msg__RCChannelMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
