Enumerated Types
================
Enumerated Types (often shorted to enums) are a list of constants which are addressed by integer values. They are often used to make the program code cleaner by simply using numbers to access an item rather than checking via an If Statement.

The type is declared using the enum declaration.

::

  enum months {January, February, March} calendar;

The first item in a standard enum is accessed using ``0``, however this can be overridden by declaring the first value with the starting index number, with the subsequent items taking subsequent numbers.

::

  enum months {January = 1, February, March} calendar;

The enum is then accessed by defining the access name.

::

  enum months month = January;

If using the name to access the enum, the case must match.

An index value can also be specified.

::

  enum months month = 0;

-------
Example
-------
The use of enumerated types are shown by accessing the week enum using the index value.

.. literalinclude:: _examples/enum.c

Download: :download:`Enumerated Types <_examples/enum.c>`
