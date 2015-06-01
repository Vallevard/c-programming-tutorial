Screen Output
=============
Printing information to screen is one of the most basic functions of a command line program. This utilises the printf function.

::

  printf("Hello, World!");

You may notice that once the program has been run, the terminal returns to wait for input. However, the string does not insert a new line causing any input on the terminal to go on the same line. We therefore need to insert a new line character.

::

  printf("Hello, World!\n");

There is also a character for tabs to allow tab spacing within the output.

::

  printf("Hello,\tWorld!");

=================
String formatters
=================
In many cases, strings will need to be outputted along with the contents of :doc:`variables`. In this case it is best to use string formatters which are used to substitute a passed variable into a location within the string.

::

  printf("Hello, %s!", name);

Multiple formatters can be used. The important point to remember is that the number of variables must match the number of formatters, and they all must be of the correct type.

::

  printf("Numbers: %i %i %i", n1, n2, n3);

A list of formatters are:

+-----------+--------------------+
| Formatter | Type               |
+===========+====================+
| %s        | string             |
+-----------+--------------------+
| %i        | integer            |
+-----------+--------------------+
| %d        | double             |
+-----------+--------------------+
| %f        | float              |
+-----------+--------------------+
| %c        | char               |
+-----------+--------------------+
| %hi       | short              |
+-----------+--------------------+
| %hu       | unsigned short     |
+-----------+--------------------+
| %u        | unsigned int       |
+-----------+--------------------+
| %li       | long               |
+-----------+--------------------+
| %lu       | unsigned long      |
+-----------+--------------------+
| %lli      | long long          |
+-----------+--------------------+
| %llu      | unsigned long long |
+-----------+--------------------+
| %lf       | long double        |
+-----------+--------------------+
