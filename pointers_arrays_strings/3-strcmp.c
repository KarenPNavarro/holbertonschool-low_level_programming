#include "main.h"

/**
* _strcmp - compares two strings.
* @s1: string 1.
* @s2: sting 2.
*
* Return: int difference between first differing chars.
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, diff;

while (s1[i] && s2[i])
{
diff = s1[i] - s2[i];
if (diff)
return (diff);
i++;
}

return (!s1[i] ? !s2[i] ? 0 : s2[i] - s1[i] : s1[i] - s2[i]);
}
