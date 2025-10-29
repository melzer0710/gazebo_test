# generated from rosidl_generator_py/resource/_idl.py.em
# with input from onrobot_rg_msgs:msg/OnRobotRGInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OnRobotRGInput(type):
    """Metaclass of message 'OnRobotRGInput'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('onrobot_rg_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'onrobot_rg_msgs.msg.OnRobotRGInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__on_robot_rg_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__on_robot_rg_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__on_robot_rg_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__on_robot_rg_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__on_robot_rg_input

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OnRobotRGInput(metaclass=Metaclass_OnRobotRGInput):
    """Message class 'OnRobotRGInput'."""

    __slots__ = [
        '_gfof',
        '_ggwd',
        '_gsta',
        '_gwdf',
    ]

    _fields_and_field_types = {
        'gfof': 'uint16',
        'ggwd': 'uint16',
        'gsta': 'uint8',
        'gwdf': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gfof = kwargs.get('gfof', int())
        self.ggwd = kwargs.get('ggwd', int())
        self.gsta = kwargs.get('gsta', int())
        self.gwdf = kwargs.get('gwdf', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.gfof != other.gfof:
            return False
        if self.ggwd != other.ggwd:
            return False
        if self.gsta != other.gsta:
            return False
        if self.gwdf != other.gwdf:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gfof(self):
        """Message field 'gfof'."""
        return self._gfof

    @gfof.setter
    def gfof(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gfof' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gfof' field must be an unsigned integer in [0, 65535]"
        self._gfof = value

    @builtins.property
    def ggwd(self):
        """Message field 'ggwd'."""
        return self._ggwd

    @ggwd.setter
    def ggwd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ggwd' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ggwd' field must be an unsigned integer in [0, 65535]"
        self._ggwd = value

    @builtins.property
    def gsta(self):
        """Message field 'gsta'."""
        return self._gsta

    @gsta.setter
    def gsta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gsta' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gsta' field must be an unsigned integer in [0, 255]"
        self._gsta = value

    @builtins.property
    def gwdf(self):
        """Message field 'gwdf'."""
        return self._gwdf

    @gwdf.setter
    def gwdf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gwdf' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gwdf' field must be an unsigned integer in [0, 65535]"
        self._gwdf = value
