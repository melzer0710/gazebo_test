// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from onrobot_rg_msgs:srv/SetCommand.idl
// generated code does not contain a copyright notice
#include "onrobot_rg_msgs/srv/detail/set_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
onrobot_rg_msgs__srv__SetCommand_Request__init(onrobot_rg_msgs__srv__SetCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    onrobot_rg_msgs__srv__SetCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
onrobot_rg_msgs__srv__SetCommand_Request__fini(onrobot_rg_msgs__srv__SetCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
onrobot_rg_msgs__srv__SetCommand_Request__are_equal(const onrobot_rg_msgs__srv__SetCommand_Request * lhs, const onrobot_rg_msgs__srv__SetCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
onrobot_rg_msgs__srv__SetCommand_Request__copy(
  const onrobot_rg_msgs__srv__SetCommand_Request * input,
  onrobot_rg_msgs__srv__SetCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

onrobot_rg_msgs__srv__SetCommand_Request *
onrobot_rg_msgs__srv__SetCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__srv__SetCommand_Request * msg = (onrobot_rg_msgs__srv__SetCommand_Request *)allocator.allocate(sizeof(onrobot_rg_msgs__srv__SetCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(onrobot_rg_msgs__srv__SetCommand_Request));
  bool success = onrobot_rg_msgs__srv__SetCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
onrobot_rg_msgs__srv__SetCommand_Request__destroy(onrobot_rg_msgs__srv__SetCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    onrobot_rg_msgs__srv__SetCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
onrobot_rg_msgs__srv__SetCommand_Request__Sequence__init(onrobot_rg_msgs__srv__SetCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__srv__SetCommand_Request * data = NULL;

  if (size) {
    data = (onrobot_rg_msgs__srv__SetCommand_Request *)allocator.zero_allocate(size, sizeof(onrobot_rg_msgs__srv__SetCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = onrobot_rg_msgs__srv__SetCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        onrobot_rg_msgs__srv__SetCommand_Request__fini(&data[i - 1]);
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
onrobot_rg_msgs__srv__SetCommand_Request__Sequence__fini(onrobot_rg_msgs__srv__SetCommand_Request__Sequence * array)
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
      onrobot_rg_msgs__srv__SetCommand_Request__fini(&array->data[i]);
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

onrobot_rg_msgs__srv__SetCommand_Request__Sequence *
onrobot_rg_msgs__srv__SetCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__srv__SetCommand_Request__Sequence * array = (onrobot_rg_msgs__srv__SetCommand_Request__Sequence *)allocator.allocate(sizeof(onrobot_rg_msgs__srv__SetCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = onrobot_rg_msgs__srv__SetCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
onrobot_rg_msgs__srv__SetCommand_Request__Sequence__destroy(onrobot_rg_msgs__srv__SetCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    onrobot_rg_msgs__srv__SetCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
onrobot_rg_msgs__srv__SetCommand_Request__Sequence__are_equal(const onrobot_rg_msgs__srv__SetCommand_Request__Sequence * lhs, const onrobot_rg_msgs__srv__SetCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!onrobot_rg_msgs__srv__SetCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
onrobot_rg_msgs__srv__SetCommand_Request__Sequence__copy(
  const onrobot_rg_msgs__srv__SetCommand_Request__Sequence * input,
  onrobot_rg_msgs__srv__SetCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(onrobot_rg_msgs__srv__SetCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    onrobot_rg_msgs__srv__SetCommand_Request * data =
      (onrobot_rg_msgs__srv__SetCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!onrobot_rg_msgs__srv__SetCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          onrobot_rg_msgs__srv__SetCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!onrobot_rg_msgs__srv__SetCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
onrobot_rg_msgs__srv__SetCommand_Response__init(onrobot_rg_msgs__srv__SetCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    onrobot_rg_msgs__srv__SetCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
onrobot_rg_msgs__srv__SetCommand_Response__fini(onrobot_rg_msgs__srv__SetCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
onrobot_rg_msgs__srv__SetCommand_Response__are_equal(const onrobot_rg_msgs__srv__SetCommand_Response * lhs, const onrobot_rg_msgs__srv__SetCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
onrobot_rg_msgs__srv__SetCommand_Response__copy(
  const onrobot_rg_msgs__srv__SetCommand_Response * input,
  onrobot_rg_msgs__srv__SetCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

onrobot_rg_msgs__srv__SetCommand_Response *
onrobot_rg_msgs__srv__SetCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__srv__SetCommand_Response * msg = (onrobot_rg_msgs__srv__SetCommand_Response *)allocator.allocate(sizeof(onrobot_rg_msgs__srv__SetCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(onrobot_rg_msgs__srv__SetCommand_Response));
  bool success = onrobot_rg_msgs__srv__SetCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
onrobot_rg_msgs__srv__SetCommand_Response__destroy(onrobot_rg_msgs__srv__SetCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    onrobot_rg_msgs__srv__SetCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
onrobot_rg_msgs__srv__SetCommand_Response__Sequence__init(onrobot_rg_msgs__srv__SetCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__srv__SetCommand_Response * data = NULL;

  if (size) {
    data = (onrobot_rg_msgs__srv__SetCommand_Response *)allocator.zero_allocate(size, sizeof(onrobot_rg_msgs__srv__SetCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = onrobot_rg_msgs__srv__SetCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        onrobot_rg_msgs__srv__SetCommand_Response__fini(&data[i - 1]);
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
onrobot_rg_msgs__srv__SetCommand_Response__Sequence__fini(onrobot_rg_msgs__srv__SetCommand_Response__Sequence * array)
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
      onrobot_rg_msgs__srv__SetCommand_Response__fini(&array->data[i]);
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

onrobot_rg_msgs__srv__SetCommand_Response__Sequence *
onrobot_rg_msgs__srv__SetCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  onrobot_rg_msgs__srv__SetCommand_Response__Sequence * array = (onrobot_rg_msgs__srv__SetCommand_Response__Sequence *)allocator.allocate(sizeof(onrobot_rg_msgs__srv__SetCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = onrobot_rg_msgs__srv__SetCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
onrobot_rg_msgs__srv__SetCommand_Response__Sequence__destroy(onrobot_rg_msgs__srv__SetCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    onrobot_rg_msgs__srv__SetCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
onrobot_rg_msgs__srv__SetCommand_Response__Sequence__are_equal(const onrobot_rg_msgs__srv__SetCommand_Response__Sequence * lhs, const onrobot_rg_msgs__srv__SetCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!onrobot_rg_msgs__srv__SetCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
onrobot_rg_msgs__srv__SetCommand_Response__Sequence__copy(
  const onrobot_rg_msgs__srv__SetCommand_Response__Sequence * input,
  onrobot_rg_msgs__srv__SetCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(onrobot_rg_msgs__srv__SetCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    onrobot_rg_msgs__srv__SetCommand_Response * data =
      (onrobot_rg_msgs__srv__SetCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!onrobot_rg_msgs__srv__SetCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          onrobot_rg_msgs__srv__SetCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!onrobot_rg_msgs__srv__SetCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
