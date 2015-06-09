math.h
======
Basic math operations such as addition and multiplication can be done in C without much effort. However, more complex functions require the use of the math library.

The library must be included at the start of the module.

::

  #include <math.h>

=========
Functions
=========
A large number of common functions are available to use.

* double acos(double x) - compute arc cosine of passed x value.
* double asin(double x) - compute arc sine of passed x value.
* double atan(double x) - compute arc tangent of passed x value.
* double ceil(double x) - round passed x value to largest whole number.
* double cos(double x) - compute cosine of passed x angle in radians.
* double cosh(double x) - compute hyperbolic cosine of passed x value.
* double exp(double x) - compute exponential of passed x value.
* double fabs(double x) - compute absolute value of passed x value.
* double floor(double x) - round passed x value to lowest whole number.
* double log(double x) - compute log of passed x value.
* double pow(double x, double y) - find x raised to the power y.
* double sin(double x) - compute sine of passed x angle in radians.
* double sinh(double x) - compute hyperbolic sine of passed x value.
* double sqrt(double x) - find square root of passed x value.
* double tan(double x) - compute tangent of passed x angle in radians.
* double tanh(double x) - compute hyperbolic tangent of passed x value.

=========
Constants
=========
Preset constants are also offered by the math library.

* M_PI - pi.
* M_PI_2 - pi divided by two.
* M_PI_4 - pi divided by four.
* M_1_PI - one divided by pi.
* M_2_PI - two divided by pi.
* M_LN2 - natural logarithm of two.
* M_LN10 - nature logarithm of ten.
