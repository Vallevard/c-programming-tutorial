Temporary Files
===============
In some cases, the application will need to utilise temporary files which are useful for the runtime of the program.

Creation of a temporary file is done with the filename automatically generated based on a provided template.

::

  char template[] = "/tmp/testXXXXXX";

The ``mkstemp`` function creates the file descriptor if the file is successfully created, or returns ``-1`` if the file could not be opened.

::

  fd = mkstemp(template);

-------
Example
-------
Creation of an example file, which is then unlinked prior to the program ending, resulting in the temporary file being deleted.

.. literalinclude:: _examples/temporaryfiles.c

Download: :download:`Temporary Files <_examples/temporaryfiles.c>`
