#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments
 * @...: the arguments to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	char *sep;
	int printed;

	va_start(args, format);
	i = 0;
	sep = "";
	while (format && format[i])
	{
		printed = 1;
		str = NULL;
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", sep, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", sep, va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s%s", sep, str ? str : "(nil)");
		}
		else
			printed = 0;
		if (printed)
			sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
