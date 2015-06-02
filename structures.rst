Structures
==========
A structure is a defined type that can hold one or more variables of varying types. It is commonly used to combine variables with a similar purpose. An example would be a book record containing information such as the title, author, ISBN, price, etc.

The structure is defined initially.

::

  struct books
  {
      char *title;
      char *author;
      int pages;
  } book;

Once created, the structure can be initialised to an accessing name and the values assigned.

::

  struct books book1;

  book1.title = "To Kill a Mockingbird";
  book1.author = "Harper Lee";
  book1.pages = 433;

-------
Example
-------
Creation of a structure and accessed via two separate instances.

.. literalinclude:: _examples/structure.c

Download: :download:`Structure <_examples/structure.c>`
