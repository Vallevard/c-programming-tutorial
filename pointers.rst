Pointers
========
Memory locations holding data are accessed by their address. Rather than passing the data contents around between functions whenever the data needs to be used, it is often easier to point to the data location via its address from the function.

::

  int *pi = &value;

The asterisk designates that the created variable is a pointer to the contents of the variable.

Also possible is defining the value of the pointer after initialising.

::

  int *pi = NULL;
  pi = &value;

It is commonly seen as good practice to assign the pointer to ``NULL`` if the value is not declared at construction time.

Checks can be made using If statements as to whether the pointer is ``NULL`` or not.

::

  if(ptr)
  if(!ptr)

Using the first statement, the If block will run if the pointer is not set to ``NULL``. Alternatively, the second statement will only succeed if the pointer is set to ``NULL``.

=========
Functions
=========
Passing pointers to functions requires the argument to be declared in a similar way to passing a usual data type.

::

  void outputAge(unsigned int *age)
  {
      ...
  }

  outputAge(&age);

-------
Example
-------
Set the value into the pointer and then output the value using the pointer.

.. literalinclude:: _examples/pointers.c

Download: :download:`Pointers <_examples/pointers.c>`
