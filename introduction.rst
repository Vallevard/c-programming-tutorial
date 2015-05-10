Introduction
============
C is a small, portable language which is commonly used on a range of devices, from servers to embedded devices. The language also sits in the middle-level, with low level languages such as Assembly being difficult to learn and read, and high level languages such as Python or Java being slower to some extent.

=========
Standards
=========
C was first introduced in 1972, and although many parts of the language today remain the same, some have changed. Changes include deprecating unsafe commands, such as the 'puts' call, while other changes add new features for use. This tutorial aims to fully use the latest C99 standard which can be enforced using::

  gcc myfile.c --std=c99 -o myfile

..note ::

  Some systems, such as Ubuntu provide a UNIX-approved way of invoking a C99 compiler by calling 'c99' instead of gcc. For example:

  c99 myfile.c -o myfile

===================
Warnings and errors
===================
Warnings are messages which indicate the potential for a problem with the code. They don't prevent the code from being compiled, but are provided for informational purposes.

Errors on the other hand are issues with the code which prevent it from being compiled, and must be corrected.

To ensure the code is as correct as possible, enable all warnings and errors, and the pedantic arguments when compiling.

::

  gcc myfile.c -Wall -pedantic --std=c99 myfile
