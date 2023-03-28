# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_hydra_message:msg/RCChannelMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RCChannelMessage(type):
    """Metaclass of message 'RCChannelMessage'."""

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
            module = import_type_support('custom_hydra_message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_hydra_message.msg.RCChannelMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rc_channel_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rc_channel_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rc_channel_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rc_channel_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rc_channel_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RCChannelMessage(metaclass=Metaclass_RCChannelMessage):
    """Message class 'RCChannelMessage'."""

    __slots__ = [
        '_ch_1',
        '_ch_2',
        '_ch_3',
        '_ch_4',
        '_ch_5',
        '_ch_6',
    ]

    _fields_and_field_types = {
        'ch_1': 'int16',
        'ch_2': 'int16',
        'ch_3': 'int16',
        'ch_4': 'int16',
        'ch_5': 'int16',
        'ch_6': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ch_1 = kwargs.get('ch_1', int())
        self.ch_2 = kwargs.get('ch_2', int())
        self.ch_3 = kwargs.get('ch_3', int())
        self.ch_4 = kwargs.get('ch_4', int())
        self.ch_5 = kwargs.get('ch_5', int())
        self.ch_6 = kwargs.get('ch_6', int())

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
        if self.ch_1 != other.ch_1:
            return False
        if self.ch_2 != other.ch_2:
            return False
        if self.ch_3 != other.ch_3:
            return False
        if self.ch_4 != other.ch_4:
            return False
        if self.ch_5 != other.ch_5:
            return False
        if self.ch_6 != other.ch_6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ch_1(self):
        """Message field 'ch_1'."""
        return self._ch_1

    @ch_1.setter
    def ch_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch_1' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch_1' field must be an integer in [-32768, 32767]"
        self._ch_1 = value

    @builtins.property
    def ch_2(self):
        """Message field 'ch_2'."""
        return self._ch_2

    @ch_2.setter
    def ch_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch_2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch_2' field must be an integer in [-32768, 32767]"
        self._ch_2 = value

    @builtins.property
    def ch_3(self):
        """Message field 'ch_3'."""
        return self._ch_3

    @ch_3.setter
    def ch_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch_3' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch_3' field must be an integer in [-32768, 32767]"
        self._ch_3 = value

    @builtins.property
    def ch_4(self):
        """Message field 'ch_4'."""
        return self._ch_4

    @ch_4.setter
    def ch_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch_4' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch_4' field must be an integer in [-32768, 32767]"
        self._ch_4 = value

    @builtins.property
    def ch_5(self):
        """Message field 'ch_5'."""
        return self._ch_5

    @ch_5.setter
    def ch_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch_5' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch_5' field must be an integer in [-32768, 32767]"
        self._ch_5 = value

    @builtins.property
    def ch_6(self):
        """Message field 'ch_6'."""
        return self._ch_6

    @ch_6.setter
    def ch_6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ch_6' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ch_6' field must be an integer in [-32768, 32767]"
        self._ch_6 = value
