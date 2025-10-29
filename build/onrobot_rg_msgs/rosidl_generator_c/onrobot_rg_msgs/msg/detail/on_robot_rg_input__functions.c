// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from onrobot_rg_msgs:msg/OnRobotRGInput.idl
// generated code does not contain a copyright notice
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
onrobot_rg_msgs__msg__OnRobotRGInput__init(onrobot_rg_msgs__msg__OnRobotRGInput * msg)
{
  if (!msg) {
    return false;
  }
  // gfof
  // ggwd
  // gsta
  // gwdf
  return true;
}

void
onrobot_rg_msgs__msg__OnRobotRGInput__fini(onrobot_rg_msgs__msg__OnRobotRGInput * msg)
{
  if (!msg) {
    return;
  }
  // gfof
  // ggwd
  // gsta
  // gwdf
}

bool
onrobot_rg_msgs__msg__OnRobotRGInput__are_equal(const onrobot_rg_msgs__msg__OnRobotRGInput * lhs, const onrobot_rg_msgs__msg__OnRobotRGInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gfof
  if (lhs->gfof != rhs->gfof) {
    return false;
  }
  // ggwd
  if (lhs->ggwd != rhs->ggwd) {
    return false;
  }
  // gsta
  if (lhs->gsta != rhs->gsta) {
    return false;
  }
  // gwdf
  if (lhs->gwdf != rhs->gwdf) {
    return false;
  }
  return true;
}

bool
onrobot_rg_msgs__msg__OnRobotRGInput__copy(
  const onrobot_rg_msgs__msg__OnRobotRGInput * input,
  onrobot_rg_msgs__msg__OnRobotRGInput * output)
{
  if (!input || !output) {
    return false;
  }
  // gfof
  output->gfof = input->gfof;
  // ggwd
  output->ggwd = input->ggwd;
  // gsta
  output->gsta = input->gsta;
  // gwdf
  output->gwdf = input->gwdf;
  return true;
}

onrobot_rg_msgs__msg__OnRobotRGInput *
onrobot_rg_msgs__msg__OnRobotRGInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__msg__OnRobotRGInput * msg = (onrobot_rg_msgs__msg__OnRobotRGInput *)allocator.allocate(sizeof(onrobot_rg_msgs__msg__OnRobotRGInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(onrobot_rg_msgs__msg__OnRobotRGInput));
  bool success = onrobot_rg_msgs__msg__OnRobotRGInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
onrobot_rg_msgs__msg__OnRobotRGInput__destroy(onrobot_rg_msgs__msg__OnRobotRGInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    onrobot_rg_msgs__msg__OnRobotRGInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
onrobot_rg_msgs__msg__OnRobotRGInput__Sequence__init(onrobot_rg_msgs__msg__OnRobotRGInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__msg__OnRobotRGInput * data = NULL;

  if (size) {
    data = (onrobot_rg_msgs__msg__OnRobotRGInput *)allocator.zero_allocate(size, sizeof(onrobot_rg_msgs__msg__OnRobotRGInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = onrobot_rg_msgs__msg__OnRobotRGInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        onrobot_rg_msgs__msg__OnRobotRGInput__fini(&data[i - 1]);
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
onrobot_rg_msgs__msg__OnRobotRGInput__Sequence__fini(onrobot_rg_msgs__msg__OnRobotRGInput__Sequence * array)
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
      onrobot_rg_msgs__msg__OnRobotRGInput__fini(&array->data[i]);
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

onrobot_rg_msgs__msg__OnRobotRGInput__Sequence *
onrobot_rg_msgs__msg__OnRobotRGInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__msg__OnRobotRGInput__Sequence * array = (onrobot_rg_msgs__msg__OnRobotRGInput__Sequence *)allocator.allocate(sizeof(onrobot_rg_msgs__msg__OnRobotRGInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = onrobot_rg_msgs__msg__OnRobotRGInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
onrobot_rg_msgs__msg__OnRobotRGInput__Sequence__destroy(onrobot_rg_msgs__msg__OnRobotRGInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    onrobot_rg_msgs__msg__OnRobotRGInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
onrobot_rg_msgs__msg__OnRobotRGInput__Sequence__are_equal(const onrobot_rg_msgs__msg__OnRobotRGInput__Sequence * lhs, const onrobot_rg_msgs__msg__OnRobotRGInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!onrobot_rg_msgs__msg__OnRobotRGInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
onrobot_rg_msgs__msg__OnRobotRGInput__Sequence__copy(
  const onrobot_rg_msgs__msg__OnRobotRGInput__Sequence * input,
  onrobot_rg_msgs__msg__OnRobotRGInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(onrobot_rg_msgs__msg__OnRobotRGInput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    onrobot_rg_msgs__msg__OnRobotRGInput * data =
      (onrobot_rg_msgs__msg__OnRobotRGInput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!onrobot_rg_msgs__msg__OnRobotRGInput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          onrobot_rg_msgs__msg__OnRobotRGInput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!onrobot_rg_msgs__msg__OnRobotRGInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
