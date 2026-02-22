#include <stdio.h>
#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: void
*/
void more_numbers(void)
{
int i;
int j;
int tens;
int units;

i = 0;
while (i < 10)
{
j = 0;
while (j < 15)
{
tens = j / 10;
units = j % 10;
if (tens > 0)
_putchar('0' + tens);
_putchar('0' + units);
j++;
}
_putchar('\n');
i++;
}
}
