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

==================
Converting Strings
==================
Values can be converted to and from strings to other types. This is done using the functions:

* ``atoi(s)`` - convert string to integer.
* ``atof(s)`` - convert string to float.
* ``strtol(s)`` - convert string to long.

------------------------
Setting Upper/Lower Case
------------------------
Converting characters to and from upper and lower case is possible using the ``tolower()`` and ``toupper()`` functions. These work at character level with::

  char charlower = tolower('J');
  char charupper = toupper('f');

To iterate through an entire string, each character must be individually read, converted, and then stored back in the string array.

Download: :download:`ToUpper <_examples/toupper.c>`
Download: :download:`ToLower <_examples/tolower.c>`

===============
Other Functions
===============
The length of a string can be obtained using the ``strlen`` function::

  int length = strlen("Hello, World");

Two strings can also be joined together (concatenated) via::

  strcat("Andrew", " the Great");

Both strings can either be supplied directly, or via a variable of string type.

-------
Example
-------
An example of printing the contents of an array.

.. literalinclude:: _examples/strings.c

Download: :download:`Strings <_examples/strings.c>`
