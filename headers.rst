Headers
=======
One or more header files are usually used with larger C programs, most often ending with the .h extension. In them, function declarations and macro definitions used by more than one source file are added.

Headers are included at the top of the source file where they are required.

::

  #include "sums.h"

The above differs to previous examples which use brackets to indicate that the header is a system header file.

====================
Conditional Includes
====================
In some cases, the header file to be included will depend on certain criteria. For example, one header file may be used for one architecture type, while another may be required for a differing architecture.

To compute which header should be used, the :doc:`preprocessor` is used.

::

  #if x64_64
      #include "system1.h"
  #elif x86
      #include "system2.h"
  #endif
