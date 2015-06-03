Compilation
===========
As a program becomes larger, it makes sense to break up related code into separate files. This allows the code to be more easily managed, and makes replacement or extension of code easier in the future.

Separating the program into multiple files does make compilation more difficult. The compilation command will need to be modified.

::

  gcc myprog.c extra1.c extra2.c

When multiple files are provided, the compiler invokes the linker and joins the source files into the resulting executable.

Individual files can be compiled if required, with linking via the compiler invoked manually.

::

  gcc -c myprog.c
  gcc -c extra1.c
  gcc -c extra2.c

  ld myprog.o extra1.o extra2.o -o myprog

The advantage of compiling individually is that only changed files need to be recompiled. For large programs which take a long time to compile, this can save significant amounts of time. It does however mean that more thought must go into the compilation process.

====
Make
====
Manually building each source file will soon start to become difficult to maintain as the number of files in the project increases. The 'make' utility automatically builds the executable when invoked by reading make files which provide instructions on how to build the program.
