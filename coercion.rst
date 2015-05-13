Coercion
========
Coercion (also known as type-casting) is a method allowing a variable of one type to be another.

The data is coerced by declaring the type that the item should convert to.

::

  int fahrenheit;
  float celsius = 20.5;

  fahrenheit = (int)celsius;

Even char data types can be converted using coercion.

::

  int value;
  char letter = "A";

  value = (int)letter;

Most type-casting is done automatically, however if in doubt, it is best to cast the types to ensure that the output is of the correct data type.

A common example of casting to ensure the output is when dividing two numbers.

::

  int a = 9;
  int b = 2;
  float answer;

  answer = (float)a / (float)b;
