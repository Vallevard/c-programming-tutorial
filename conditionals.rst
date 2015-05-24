Conditionals
============
Conditionals are a way to change the operation of the program based on a user choice, or a specified outcome.

=================
If Else statement
=================
If Else statements are used to determine what should happen when there is a choice to be made. Examples include checking whether a value is over a specific amount, a password is equal or greater than a minimum value, or a particular character has been chosen.

An example would be to check whether the result on an exam is considered a pass or fail. Below we check the value of the variable 'result' to see whether it is greater than or equal to 45.

::

  if (result >= 40)
      printf("Pass\n")
  else
      printf("Fail\n")

Within an If Else Statement, if the blocks are a single line in length, no semi-colon is required. Multiple lines however do require semi-colons to end the statement. Also noticable in multi-line statement blocks is the requirement to include curly brackets.

::

  if (result >= 40)
  {
      printf("Pass\n");
      printf("Congratulations!\n");
  }
  else
  {
      printf("Fail\n");
      printf("You will need to arrange a resit.\n");
  }

If you are only wanting to output when a certain condition is met, the else portion of the If Else is not required.

::

  if (balance < 0)
      printf("Your account is overdrawn!\n");

On the other hand, multiple comparisons may need to be made to check whether a value lies in a variety of ranges. This is achieved by cascading comparisons and checking the value multiple times until one matches the criteria.

::

  if (result >= 80)
      printf("Pass: Grade A\n");
  else if (result >= 60)
      printf("Pass: Grade B\n");
  else if (result >= 40)
      printf("Pass: Grade C\n");
  else
      printf("Fail\n");

Finally, it is entirely possible to compare multiple values within a comparison.

-------
Example
-------

.. literalinclude:: _examples/ifstatement.c

Download: :download:`If Statement <_examples/ifstatement.c>`

=====================
Switch Case statement
=====================
A Case statement is a shorter version of an If Else statement, and is commonly used where many options are possible.

Each case block requires a break statement to be used, otherwise the computer will continue to execute any statements in other blocks below it.

-------
Example
-------

.. literalinclude:: _examples/switchcase.c

Download: :download:`Switch Case <_examples/switchcase.c>`
