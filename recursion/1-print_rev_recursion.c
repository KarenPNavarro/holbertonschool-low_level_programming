#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: the string to be printed
*
* Description: Recursively prints the characters of the string
*              in reverse order using _putchar.
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
