#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: pointer to the string to convert
*
* Return: the integer value of the string
*/
int _atoi(char *s)
{
int sign;
int result;
int found;

sign = 1;
result = 0;
found = 0;

while (*s != '\0')
{
if (*s == '-')
sign = sign * -1;
else if (*s >= '0' && *s <= '9')
{
found = 1;
result = result * 10 + (*s - '0');
}
else if (found == 1)
break;
s++;
}
return (sign *result);
}
