#include <stdio.h>

/**
* main - prints all arguments received by the program
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;

i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
