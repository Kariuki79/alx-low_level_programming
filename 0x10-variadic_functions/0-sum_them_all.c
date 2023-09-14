#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - takes a variable number of
 * integer parameters and returns the sum of those parameters
 * @n: the first paramter of the function and it represents
 * number of additional parameters
 * @...: variable number of arguments
 * Return: 0 if n is null or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
