#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string to search through
* @accept: the string of accepted characters
*
* Return: number of bytes in s that consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count;
int i;
int found;

count = 0;

while (*s != '\0')
{
found = 0;

for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}

if (found == 0)
{
return (count);
}

count++;
s++;
}

return (count);
}
