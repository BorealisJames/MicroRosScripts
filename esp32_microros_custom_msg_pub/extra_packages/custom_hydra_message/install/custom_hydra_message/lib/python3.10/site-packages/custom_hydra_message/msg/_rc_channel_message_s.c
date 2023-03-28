// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_hydra_message:msg/RCChannelMessage.idl
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
#include "custom_hydra_message/msg/detail/rc_channel_message__struct.h"
#include "custom_hydra_message/msg/detail/rc_channel_message__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_hydra_message__msg__rc_channel_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("custom_hydra_message.msg._rc_channel_message.RCChannelMessage", full_classname_dest, 61) == 0);
  }
  custom_hydra_message__msg__RCChannelMessage * ros_message = _ros_message;
  {  // ch_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ch_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ch_1 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ch_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ch_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ch_2 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ch_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ch_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ch_3 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ch_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "ch_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ch_4 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ch_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "ch_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ch_5 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ch_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "ch_6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ch_6 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_hydra_message__msg__rc_channel_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RCChannelMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_hydra_message.msg._rc_channel_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RCChannelMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_hydra_message__msg__RCChannelMessage * ros_message = (custom_hydra_message__msg__RCChannelMessage *)raw_ros_message;
  {  // ch_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ch_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ch_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ch_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ch_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ch_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ch_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ch_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ch_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ch_4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ch_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ch_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ch_5
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ch_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ch_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ch_6
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ch_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ch_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
