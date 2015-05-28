Functions
=========
A function is a block of code which performs a task, which is typically called from many different places within the program. An example could include calculating tax on a product and returning the value to be displayed to the user.

The most common function, which you have already seen is the main() function, which generally always follows a basic layout.

::

  int main()
  {
      return 0;
  }

Two important parts of the function are the 'int', which declares what type of value will be returned from the function. Also included is the return statement. In the case of main(), this returns 0 to the operating system indicating that the program ran successfully.

A function is called simply by using its name.

::

  myfunction();

=============
Return values
=============
As above, the return statement is where we declare what data will be returned after the function has been run. Any function can return a value.

Alternatively, a function may not be required to return anything. In this case, we declare 'void' as the value which will be returned.

::

  void display_message()
  {
      printf('Hello, World');
  }

==================
Passing parameters
==================
One or many values can be passed to a function, where they can be processed. This allows the function to take any values to run through the same piece of code.

::

  void calculate_tax(float subtotal)
  {
      float total;
      total = 17.5 * subtotal;
  }

The function is called by its name, with the value to be passed contained in brackets.

::

  calculate_tax(3408.26);

-------
Example
-------
An example of functions used to add and subtract passed values.

.. literalinclude:: _examples/function.c

Download: :download:`Function <_examples/function.c>`
