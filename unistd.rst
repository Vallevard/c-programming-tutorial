unistd.h
========
The unistd.h module provides access to the POSIX operating system API.

==================
Getting a hostname
==================
The hostname of the system being used can be retrieved.

::

  gethostname(hostname, size);

The *hostname* parameter should be a char array where the retrieved hostname will be stored. The *size* argument must be large enough to store the hostname, otherwise the string will be clipped.

Once retrieved, the hostname string can be used via the variable.
