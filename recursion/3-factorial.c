#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: the number whose factorial to calculate
*
* Description: Recursively calculates the factorial of n.
*              If n is negative, returns -1 to indicate an error.
*              Factorial of 0 is defined as 1.
*
* Return: factorial of n, or -1 if n < 0
*/
int factorial(int n)
{
if (n < 0)
return (-1);       /* error case */
if (n == 0)
return (1);        /* base case */
return (n * factorial(n - 1)); /* recursive case */
}
