Preprocessor
============
The preprocessor is a tool which runs a filter on the source code prior to it being compiled. Any defined constants are then set in code and subsequently compiled. Their use is particularly useful for setting values for particular architectures, however they can also be used for simpler tasks such as version numbers or static resources.

Once a value has been set by the preprocessor, it can not be changed without recompiling the program with the new value.

The definitions are made at the beginning of the program.

::

  #define MAXCONNECTIONS 10

The preprocessor will then look through the code replacing any instances of the name with the value.

-------
Example
-------
The example shows the substitution of the name for the defined number.

.. literalinclude:: _examples/preprocessor.c

Download: :download:`Preprocessor <_examples/preprocessor.c>`

=====
Undef
=====
A macro can be undefined if required. To set a new macro value, the existing macro must be undefined first.

::

  #undef ITEMS

=======
Include
=======
The include statement has been used a number of times already in the examples. There are two possible forms.

::

  #include <file>
  #include "file"

The ``<file>`` example tells the compiler to check the system for the file to include. Alternatively, the ``"file"`` method checks the current folder. In either case, an include statement usually links to a header file rather than the source file.

==============
Ifdef / Ifndef
==============
The preprocessor can be made conditional allowing the compiler to choose the action based on choice.

::

  #ifdef LINUX
      #define AVAILABLE 64
  #else
      #define AVAILABLE 32
  #endif

Also permitted is to make a choice based on a negative condition.

::

  #ifndef WINDOWS
      #define MEMORY 128
  #else
      #define MEMORY 192
  #endif

The compiler can also be passed arguments which can be taken by the preprocessor and substituted.

::

  gcc -DLINELENGTH=80 myprogram.c

The above is simply the compile time declaration of a define statement.
