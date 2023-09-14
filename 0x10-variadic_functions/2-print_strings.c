#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a variable number of strings followed
 * by a specified separator
 * @separator: function that represents the string to be printed
 * between the strings to be printed
 * @n: number of strings to be printed
 * @...: accepts a variable number of arguments
 *
 * separator = NULL, it is not printed.
 * if one of the string is NULL, nil is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int m;

	va_start(args, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (m != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
