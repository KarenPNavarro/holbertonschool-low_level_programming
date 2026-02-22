#include "main.h"

/**
* print_square - prints a square made of # characters
* @size: the size (width and height) of the square
*
* Return: void
*/
void print_square(int size)
{
int i;
int j;

if (size <= 0)
{
_putchar('\n');
return;
}

i = 0;
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
