// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from onrobot_rg_msgs:msg/OnRobotRGInput.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_input__struct.h"
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_input__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool onrobot_rg_msgs__msg__on_robot_rg_input__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("onrobot_rg_msgs.msg._on_robot_rg_input.OnRobotRGInput", full_classname_dest, 53) == 0);
  }
  onrobot_rg_msgs__msg__OnRobotRGInput * ros_message = _ros_message;
  {  // gfof
    PyObject * field = PyObject_GetAttrString(_pymsg, "gfof");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gfof = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ggwd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ggwd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ggwd = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gsta
    PyObject * field = PyObject_GetAttrString(_pymsg, "gsta");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gsta = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gwdf
    PyObject * field = PyObject_GetAttrString(_pymsg, "gwdf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gwdf = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * onrobot_rg_msgs__msg__on_robot_rg_input__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OnRobotRGInput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("onrobot_rg_msgs.msg._on_robot_rg_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OnRobotRGInput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  onrobot_rg_msgs__msg__OnRobotRGInput * ros_message = (onrobot_rg_msgs__msg__OnRobotRGInput *)raw_ros_message;
  {  // gfof
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gfof);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gfof", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ggwd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ggwd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ggwd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gsta
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gsta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gsta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gwdf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gwdf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gwdf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
