#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;
	int letter;

	count = 0;
	while (count < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
