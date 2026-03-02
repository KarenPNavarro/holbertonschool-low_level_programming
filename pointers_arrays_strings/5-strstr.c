#include "main.h"

/**
* _strstr - finds the first occurrence of a substring in a string
* @haystack: pointer to the string to search in
* @needle: pointer to the substring to search for
*
* Return: pointer to the beginning of the substring or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int j;

i = 0;
if (needle[0] == '\0')
return (haystack);

while (haystack[i] != '\0')
{
j = 0;
while (haystack[i + j] == needle[j] && needle[j] != '\0')
j++;

if (needle[j] == '\0')
return (&haystack[i]);
i++;
}
return (0);
}
