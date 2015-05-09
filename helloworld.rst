Hello World
===========
As with any good programming tutorial, a Hello World example will show the basics of a C program.

.. literalinclude:: _examples/helloworld.c

Download: :download:`Hello World <_examples/helloworld.c>`

The first line includes the stdio module which contains a number of basic functions to C. We then declare the main function which is included in every C program. The printf function outputs the string passed to it and displays it on the standard output (command line), with a second printf function used to output a new line. Finally, we return 0 to the operating system to indicate that the program ran successfully.

The code is compiled with::

  gcc helloworld.c -o helloworld

The examples in this tutorial will utilise GCC as the sole compiler. An alternative is Clang which for the most part will behave entirely the same as GCC, and may be used if wanted/needed. The second argument defines the name of the C program to compile, with the ``-o helloworld`` arguments specifying the output filename. This may be omitted, however the output filename will be 'a.out'.
