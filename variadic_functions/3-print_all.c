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
	char *separator;

	va_start(args, format);

	i = 0;
	separator = "";

	while (format && format[i])
	{
		str = NULL;
		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%i", separator, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s%s", separator, str ? str : "(nil)");
		}
		if (str != NULL || format[i] == 'c' ||
			format[i] == 'i' || format[i] == 'f')
			separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
