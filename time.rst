time.h
======
The time module provides a number of methods for dealing with time handling. The first step is to include the time module.

::

  #include <time.h>

The time library provides a formatting function to customise the output. This uses string formatters to identify the portions of time and date to show:

+----+-----------------------------------------+
| %Y | Year in four-digit format (e.g. 2014)   |
+----+-----------------------------------------+
| %y | Year in two-digit format (e.g. 14)      |
+----+-----------------------------------------+
| %m | Month in numerical format               |
+----+-----------------------------------------+
| %B | Month in word format (e.g. June)        |
+----+-----------------------------------------+
| %b | Month in three-letter format (e.g. Jun) |
+----+-----------------------------------------+
| %d | Date                                    |
+----+-----------------------------------------+
| %A | Day (e.g. Tuesday)                      |
+----+-----------------------------------------+
| %a | Day in three-letter format (e.g. Tue)   |
+----+-----------------------------------------+
| %H | Hours                                   |
+----+-----------------------------------------+
| %M | Minutes                                 |
+----+-----------------------------------------+
| %S | Seconds                                 |
+----+-----------------------------------------+
| %T | Time in HH:MM:SS format                 |
+----+-----------------------------------------+
| %R | Time in HH:MM format                    |
+----+-----------------------------------------+
| %r | Time in HH:MM:SS 12-hour format         |
+----+-----------------------------------------+
| %c | Complete date, time and year output     |
+----+-----------------------------------------+
| %D | Complete date in DD/MM/YY format        |
+----+-----------------------------------------+
| %f | Complete date in YYYY-MM-DD format      |
+----+-----------------------------------------+
| %p | AM/PM designation (uppercase)           |
+----+-----------------------------------------+
| %P | AM/PM designation (lowercase)           |
+----+-----------------------------------------+

Using the ``strftime`` function combined with a char array, the output is formatted into the variable which can then be outputted or handled.

::

  strftime(buffer, length, output, time);

THe *buffer* parameter takes the variable from which to store the formatted time output. Commonly, this will be used in conjunction with a variable length buffer however the size can also be passed with the *length* argument. The *output* is the format to display using the modifiers above and finally the *time* parameter specifies the time value to handle.

-------
Example
-------
Display both the local time and date.

.. literalinclude:: _examples/time.c

Download: :download:`Time <_examples/time.c>`
