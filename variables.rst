Variables
=========
Variables are named pointers to memory where a value is stored. The C language requires that the variables are also given a type, which is a declaration of what kind of item will be stored within memory. This allows the computer to determine how much space to reserve for the variable.

C has several basic types such as char, int, float, and double. There are also additional types such as signed, unsigned, and long which allow storing of values within variables in different ways.

=======
Integer
=======
An integer is a whole number, which takes up four bytes of memory. If a float or double is inserted into an integer variable, the value will be converted to an integer.

::

  int count = 8;

Also available are unsigned, long and short integers. These perform a number of extra features.

* 'short int' - Has a range of -32768 to +32767 and requires two bytes of memory.
* 'unsigned short int' - Has a range from 0 to 65536.
* 'long int' - Default type, also known as just 'int'.

====
Long
====
The long data type default is a signed integer type with a range of −2147483647 to +2147483647. It is declared in a number of ways, but each are the same::

  long lightspeed = 299792458;
  long int lightspeed = 299792458;
  signed long lightspeed = 299792458;
  signed long int lightspeed = 299792458;

Alternatives are also available.

* 'unsigned long' or 'unsigned long int' - The same as long however but unsigned.
* 'long long', 'long long int', 'signed long long', or 'signed long long int' - 64-bits in size with a range of −9223372036854775807 to +9223372036854775807.
* 'unsigned long long' or 'unsigned long long int' - Unsigned version of the long long data type.

=====
Float
=====
The float type provides for decimal numbers to be stored in memory.

::

  float pi = 3.14;

======
Double
======
Similar to the float, the double data type also provides a way to store decimal numbers, however these have double-precision.

::

  double score = 53.92819384;

A long double data type is also available which allows use of an extended precision floating-point number.

====
Char
====
The char data type stores a single character in a 1-byte store of memory. Although it stores a character, the representation in memory is actually an integer value.

::

  char initial = 'd';

Alongside the bare char type, an unsigned and signed variant also exists in some implementations.

=======
Strings
=======
Strings are not a type in the same way as other languages such as Python. Instead, a string is made up by an array of char data types.

See the :doc:`strings` page for more information on their use.

=======
Boolean
=======
The latest C99 standard adds support for Boolean (true/false) variables, however attempts to compile a program with the Boolean type on a compiler using an older standard will result in errors.

::

  bool operational = true;

.. note ::

  To use the Boolean type, the program must be compiled with the --std=c99 flag.

===============
Local vs Global
===============
When a variable is created within a :doc:`functions`, the variable can only be called from there. Any attempt to use it outside of the function, such as in another function, will throw up an error. This is a local variable.

Global variables are defined outside of a function, and can be accessed throughout the program. Multiple functions for example are able to call and modify the value of the variable.

================
Static Variables
================
Static variables are local to a function. The variable is initialised on the first call of the function. When the function exits, the value contained within the static variable is remembered, with the value being the same as it was left on each function call.

The static variable is declared using the ``static`` statement prior to the variable data type.

::

  static int age;

========
Keywords
========
C has a number of keywords reserved for use with the language. This prevents them being redefined.

* auto
* break
* case
* char
* continue
* default
* do
* double
* else
* enum
* extern
* float
* for
* goto
* if
* int
* long
* register
* return
* short
* sizeof
* static
* struct
* switch
* typedef
* union
* unsigned
* void
* while

Variable names must begin with a letter or underscore, and can also contain numbers.

-------
Example
-------
The variables example shows the use of global and local variables.

.. literalinclude:: _examples/variables.c

Download: :download:`Variables <_examples/variables.c>`
