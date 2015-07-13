Unions
======
A union is a variable which is able to hold objects of different sizes and types; it is even possible to store :doc:`structures` objects. When the program is compiled, the compiler always allocates enough memory for the largest member.

To remember which union variable is being used at any one time, they are often placed inside structures.

The union is defined in a similar way to a structure.

::

  union software
  {
      char *name;
      float version;
  };

The union can be declared by assigning it to a name.

::

  union software firefox;

Values can be assigned to the union after it has been constructed.

::

  software.name = "Firefox";
  software.version = 39.0.1;

-------
Example
-------
Set and access a number of values held within a union.

.. literalinclude:: _examples/union.c

Download: :download:`Unions <_examples/union.c>`
