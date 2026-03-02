#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: the base number
* @y: the exponent
*
* Description: Recursively calculates x to the power of y.
*              If y is negative, returns -1 to indicate an error.
*
* Return: x^y, or -1 if y < 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);        /* error case */
if (y == 0)
return (1);         /* base case */
return (x * _pow_recursion(x, y - 1)); /* recursive case */
}
