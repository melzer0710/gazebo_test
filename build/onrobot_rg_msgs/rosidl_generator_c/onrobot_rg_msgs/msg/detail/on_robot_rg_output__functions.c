// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from onrobot_rg_msgs:msg/OnRobotRGOutput.idl
// generated code does not contain a copyright notice
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_output__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
onrobot_rg_msgs__msg__OnRobotRGOutput__init(onrobot_rg_msgs__msg__OnRobotRGOutput * msg)
{
  if (!msg) {
    return false;
  }
  // rgfr
  // rgwd
  // rctr
  return true;
}

void
onrobot_rg_msgs__msg__OnRobotRGOutput__fini(onrobot_rg_msgs__msg__OnRobotRGOutput * msg)
{
  if (!msg) {
    return;
  }
  // rgfr
  // rgwd
  // rctr
}

bool
onrobot_rg_msgs__msg__OnRobotRGOutput__are_equal(const onrobot_rg_msgs__msg__OnRobotRGOutput * lhs, const onrobot_rg_msgs__msg__OnRobotRGOutput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rgfr
  if (lhs->rgfr != rhs->rgfr) {
    return false;
  }
  // rgwd
  if (lhs->rgwd != rhs->rgwd) {
    return false;
  }
  // rctr
  if (lhs->rctr != rhs->rctr) {
    return false;
  }
  return true;
}

bool
onrobot_rg_msgs__msg__OnRobotRGOutput__copy(
  const onrobot_rg_msgs__msg__OnRobotRGOutput * input,
  onrobot_rg_msgs__msg__OnRobotRGOutput * output)
{
  if (!input || !output) {
    return false;
  }
  // rgfr
  output->rgfr = input->rgfr;
  // rgwd
  output->rgwd = input->rgwd;
  // rctr
  output->rctr = input->rctr;
  return true;
}

onrobot_rg_msgs__msg__OnRobotRGOutput *
onrobot_rg_msgs__msg__OnRobotRGOutput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__msg__OnRobotRGOutput * msg = (onrobot_rg_msgs__msg__OnRobotRGOutput *)allocator.allocate(sizeof(onrobot_rg_msgs__msg__OnRobotRGOutput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(onrobot_rg_msgs__msg__OnRobotRGOutput));
  bool success = onrobot_rg_msgs__msg__OnRobotRGOutput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
onrobot_rg_msgs__msg__OnRobotRGOutput__destroy(onrobot_rg_msgs__msg__OnRobotRGOutput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    onrobot_rg_msgs__msg__OnRobotRGOutput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence__init(onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__msg__OnRobotRGOutput * data = NULL;

  if (size) {
    data = (onrobot_rg_msgs__msg__OnRobotRGOutput *)allocator.zero_allocate(size, sizeof(onrobot_rg_msgs__msg__OnRobotRGOutput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = onrobot_rg_msgs__msg__OnRobotRGOutput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        onrobot_rg_msgs__msg__OnRobotRGOutput__fini(&data[i - 1]);
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
onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence__fini(onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence * array)
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
      onrobot_rg_msgs__msg__OnRobotRGOutput__fini(&array->data[i]);
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

onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence *
onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence * array = (onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence *)allocator.allocate(sizeof(onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence__destroy(onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence__are_equal(const onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence * lhs, const onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!onrobot_rg_msgs__msg__OnRobotRGOutput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence__copy(
  const onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence * input,
  onrobot_rg_msgs__msg__OnRobotRGOutput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(onrobot_rg_msgs__msg__OnRobotRGOutput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    onrobot_rg_msgs__msg__OnRobotRGOutput * data =
      (onrobot_rg_msgs__msg__OnRobotRGOutput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!onrobot_rg_msgs__msg__OnRobotRGOutput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          onrobot_rg_msgs__msg__OnRobotRGOutput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!onrobot_rg_msgs__msg__OnRobotRGOutput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
