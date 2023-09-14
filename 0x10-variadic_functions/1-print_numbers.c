#include"variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints a variable number of integers
 * followed by a new line
 * @n: number of integers to be printed
 * @separator: represents a string that will be printed between
 * the number when they are printed to the console
 * @...: function accepts a variable number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;

	va_list args;

	va_start(args, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(args, int));

		if (m != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
