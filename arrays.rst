Array
=====
The array is a way of storing many items of a single type within a single data structure. The array is defined with a size, within which the defined number of items can be inserted. Arrays can also have three dimensions, in effect, arrays inside arrays.

An array is defined in a similar way to a variable.

::

  int lotto[6];

The array has a data type and a name. It also has a length which indicates the size of the array.

Values can also be assigned to the array at the type of construction.

::

  int lotto[6] = 5, 42, 28, 19, 6, 23;

Individual values held within the array can be accessed using the index number, with the first item accessed via ``0``.

::

  choice = lotto[3];

A multi-dimensional array is also possible, which provides for data to be stored in different ways.

::

  int table[10][10];

Further dimensions can also be defined by adding more sizes to the end of the array. Again, the values are accessed by specifying the location of the value in relation to the location it is stored.

-------
Example
-------
Showcasing an array storing five different names in each location of the structure.

.. literalinclude:: _examples/array.c

Download: :download:`Array <_examples/array.c>`
