#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars initialized with a specific char
* @size: size of the array to create
* @c: character to initialize the array with
*
* Return: pointer to the array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

i = 0;
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
