#include "main.h"
#include <stdlib.h>

/**
* get_len - returns the length of a string
* @s: pointer to the string
*
* Return: length of the string
*/
int get_len(char *s)
{
int len;

len = 0;
while (s[len] != '\0')
len++;
return (len);
}

/**
* string_nconcat - concatenates two strings using at most n bytes from s2
* @s1: pointer to the first string
* @s2: pointer to the second string
* @n: maximum number of bytes to use from s2
*
* Return: pointer to the concatenated string or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
int i;
int j;
int len1;
int len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = get_len(s1);
len2 = get_len(s2);

if (n > (unsigned int)len2)
n = len2;

concat = malloc(len1 + n + 1);
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < (int)n; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}
