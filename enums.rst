Enumerated Types
================
Enumerated Types (often shorted to enums) are a list of constants which are addressed by integer values. They are often used to make the program code cleaner by simply using numbers to access an item rather than checking via an If Statement.

The type is declared using the enum declaration.

::

  enum months {January, February, March} calendar;

The first item in a standard enum is accessed using ``0``, however this can be overridden by declaring the first value with the starting index number, with the subsequent items taking subsequent numbers.

::

  enum months {January = 1, February, March} calendar;
