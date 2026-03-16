#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));
	return (0);
}
```

`op_t ops[]` — an array of structs pairing each operator string with its function.

`get_op_func` — loops through the array comparing the operator, returns the matching function pointer or `NULL`.

`main` — validates arguments, gets the function, checks for division by zero, then calls the function and prints the result.

**Example:**
```
$ ./calc 10 + 5
15

$ ./calc 10 / 0
Error  (exit 100)

$ ./calc 10 ^ 5
Error  (exit 99)

$ ./calc 10
Error  (exit 98) ✓
