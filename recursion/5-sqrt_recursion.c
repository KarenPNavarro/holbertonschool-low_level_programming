#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find the square root of
*
* Return: the natural square root or -1 if it doesn't exist
*/
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 0));
}

/**
* sqrt_helper - helper function to find square root recursively
* @n: the number to find the square root of
* @i: current number to check
*
* Return: the natural square root or -1 if it doesn't exist
*/
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_helper(n, i + 1));
}
