Strings
=======
Strings in C are defined as an array of characters.

::

  char name[20];

The above will create an array twenty characters in size, and attempts to insert a larger string into the array will cause the excess characters to be omitted.

An alternative method of creating the array without a size limit.

::

  char *name = "David Smith"

===============
String Handling
===============
A number of string handling functions are provided by the string module.

::

  #include <string.h>

The module includes the following functionality:

* ``strlen(s)`` - return the length of the string.
* ``strcpy(s)`` - copy a string to a new variable.
* ``strcat(s)`` - concatenate two strings.
* ``strcmp(s)`` - compare two strings for case-sensitivity.
* ``strcmpi(s)`` - case insensitive string comparison.
* ``strupr(s)`` - covert supplied string to uppercase.
* ``strlwr(s)`` - convert supplied string to lowercase.
* ``strtok(s, delimiter)`` - break the string into toeks separated by the specified delimiter.

-------
Example
-------
An example of printing the contents of an array.

.. literalinclude:: _examples/strings.c

Download: :download:`Strings <_examples/strings.c>`
