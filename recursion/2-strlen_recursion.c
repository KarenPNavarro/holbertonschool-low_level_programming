#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: the string whose length to calculate
*
* Description: Uses recursion to count the number of characters
*              in a string until the null terminator is reached.
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0') /* base case: end of string */
return (0);
return (1 + _strlen_recursion(s + 1));
}
