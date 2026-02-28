#include <stddef.h>
#include "main.h"

/**
* _strchr - locates a character in a string
* @s: the string to search through
* @c: the character to search for
*
* Return: pointer to first occurrence of c in s, or NULL if not found
*/char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (*s == c)
{
return (s);
}

return (NULL);
}
