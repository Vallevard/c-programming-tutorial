Constants
=========
A constant is a fixed value that is unable to be changed during the execution of the program. They are defined in a similar way to :doc:`variables`, and are useful for values that should never be changed, either accidentally or deliberately. They also have an added performance benefit.

A constant can be defined in two ways.

::

  int const a = 1;
  const int a = 1;

.. note ::

  The above statements are both the same, however it is best to choose one method and stick to it. On the other hand, if you are contributing code to a project, you should use the existing method to ensure consistency.

-------
Example
-------
Reading from a constant is similar to the way a variable is read from.

.. literalinclude:: _examples/constant.c

Download: :download:`Constant <_examples/constant.c>`
