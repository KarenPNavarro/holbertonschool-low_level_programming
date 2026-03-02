#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to the string to search
* @accept: pointer to the string of bytes to search for
*
* Return: pointer to the matching byte or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
int i;
int j;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
return (&s[i]);
j++;
}
i++;
}
return (0);
}
