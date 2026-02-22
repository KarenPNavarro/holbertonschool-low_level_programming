#include "main.h"

/**
* print_triangle - prints a triangle made of # characters
* @size: the size (height) of the triangle
*
* Return: void
*/
void print_triangle(int size)
{
int i;
int j;

if (size <= 0)
{
_putchar('\n');
return;
}

i = 1;
while (i <= size)
{
j = 0;
while (j < size - i)
{
_putchar(' ');
j++;
}
j = 0;
while (j < i)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
