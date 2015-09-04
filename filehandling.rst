File Handling
=============
Basic reading from and writing to text files is able to be done relatively easily in C.

============
File Opening
============
Files are opened for reading or reading and writing. This is done by providing the filename of the file to be read.

::

  FILE *fp;
  fp = fopen(filename, mode);

The *filename* parameter should be set to the name of the file. If it does not exist, the function returns ``NULL``.

-------
Reading
-------
The *mode* specifies whether it is open for read-only ``"r"`` or read-write ``"r+"``.

The mode specification above targets text files. If the file is a binary, the mode should be set to ``"rb"`` for reading, or ``"r+b"`` for read-write.

-------
Writing
-------
When writing to the text file, there are a number of modes. The file can be opened simply for writing ``"w"``, or content can be appended to the end ``"a"``. Alternatively, the file can be opened for write and read ``"w+"`` which creates the file if it does not exist and truncates any content in a file that does not exit. Finally the append and read mode ``"a+"`` allows the file to be read from the beginning but writes are added to the end.

To handle binary files, the mode for binary files needs to be specified. The mode should be set to ``"wb"`` for simply writing, or ``"w+b"`` for write-read. Alternatively, to write and append use ``"ab"`` and to read and append specify ``"a+b"``.

============
File Closing
============
Closing a file handle once it is no longer required to be opened is important to prevent data loss. Care should be taken to ensure that attempts to read from the file are not made again once it has been closed.

::

  fclose(fp);

========
Renaming
========
Files can be renamed by specifying the current filename, and the filename to change it to. The function return value is set to ``0`` if the file is successfully renamed.

::

  value = rename(old, new);

========
Deletion
========
Deletion of files can be made by specifying the filename of the file to remove. When the file is deleted, the function returns ``0``.

::

  value = remove(filename);

===========
Permissions
===========
