Operators
=========
The C programming language has a wide range of useful operators. These are functions which apply to values to give a result. The basic arithmetic operators will be familiar from mathematics. Other programming languages often use similar or the same operators.

==========
Arithmetic
==========
Arithmetic operators provide the ability to perform mathematical operations. The typical ones are ``*`` (multiply), ``/`` (divide), ``+`` (add), and ``-`` (subtract). Other operators include ``%`` (modulo), ``^`` (power), and ``**`` (square).

::

  answer = 4 * 3 + (5 - 1)

Arithmetic operators are commonly used with :doc:`loops` to increment values.

::

  i = i + 1

Abbreviations are also a common occurrence in place of reassigning the variable with the new value.

::

  i++;
  ++i;

Either of the above will increment the variable by one. Alternatively, decrementing by one can also be made shorthand.

::

  i--;
  --i;

Additional shorthand for more than one is also available.

::

  i += 5
  i -= 3
  i *= 8
  i /= 3

==========
Comparison
==========
Comparison operators allow checking of two values against each other.

* ``==`` - equal to
* ``>`` - greater than
* ``<`` - less than
* ``>=`` - greater than
* ``<=`` - less than
* ``!=`` - not equal to

Comparison operators can also be combined with arithmetic operators, typically within if statements.

::

  if (a + b > c)
      printf("Greater than 'c'");

=======
Logical
=======
Another type of operator is the logical operator, which allows checking of multiple items. They are typically used along with a comparison statement.

To check whether multiple items match a value the 'and' operator is used. The 'and' operator is defined with the ``&&`` declaration and when used with an if statement, the code within the block will only be executed if all the values apply.

::

  x < 20 && y < 20

Checking one or another value is done with the 'or' operator via the ``||`` declaration.

::

  x < 5 || y > 10

Values can also be checked to not be matching with the 'not' operator, with the ``!`` declaration.

::

  if (! running)
      printf("Not running");
