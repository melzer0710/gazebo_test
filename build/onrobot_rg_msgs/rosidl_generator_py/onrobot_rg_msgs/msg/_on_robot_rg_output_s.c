// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from onrobot_rg_msgs:msg/OnRobotRGOutput.idl
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
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_output__struct.h"
#include "onrobot_rg_msgs/msg/detail/on_robot_rg_output__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool onrobot_rg_msgs__msg__on_robot_rg_output__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("onrobot_rg_msgs.msg._on_robot_rg_output.OnRobotRGOutput", full_classname_dest, 55) == 0);
  }
  onrobot_rg_msgs__msg__OnRobotRGOutput * ros_message = _ros_message;
  {  // rgfr
    PyObject * field = PyObject_GetAttrString(_pymsg, "rgfr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rgfr = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rgwd
    PyObject * field = PyObject_GetAttrString(_pymsg, "rgwd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rgwd = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rctr
    PyObject * field = PyObject_GetAttrString(_pymsg, "rctr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rctr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * onrobot_rg_msgs__msg__on_robot_rg_output__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OnRobotRGOutput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("onrobot_rg_msgs.msg._on_robot_rg_output");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OnRobotRGOutput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  onrobot_rg_msgs__msg__OnRobotRGOutput * ros_message = (onrobot_rg_msgs__msg__OnRobotRGOutput *)raw_ros_message;
  {  // rgfr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rgfr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rgfr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rgwd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rgwd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rgwd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rctr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rctr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rctr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
