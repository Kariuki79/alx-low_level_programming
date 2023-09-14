#include <stdarg.h>

/**
 * sum_them_all - takes a variable number of
 * integer parameters and returns the sum of those parameters
 * @n: the first paramter of the function and it represents
 * number of additional parameters
 * @...: variable number of arguments
 *
 * Return: if n == 0
 * else - sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}

	va_end(args);

	return (sum);
}
