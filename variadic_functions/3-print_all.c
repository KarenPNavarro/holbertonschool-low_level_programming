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
	char *valid;

	va_start(args, format);

	i = 0;
	separator = "";
	valid = "cifs";

	while (format && format[i])
	{
		str = NULL;
		if (format[i] == valid[0])
			printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == valid[1])
			printf("%s%i", separator, va_arg(args, int));
		else if (format[i] == valid[2])
			printf("%s%f", separator, va_arg(args, double));
		else if (format[i] == valid[3])
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}
		if (format[i] == valid[0] || format[i] == valid[1] ||
			format[i] == valid[2] || format[i] == valid[3])
			separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
