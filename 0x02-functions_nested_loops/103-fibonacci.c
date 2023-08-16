#include <stdio.h>

/**
 * main - prints sum of even Fibonacci numbers
 * values not exceed 4000000
 * Return: 0
 */
int main(void)
{
	int m = 0;
	long n = 1, p = 2, sum = p;

	while (p + n < 4000000)
	{
		p += n;
		if (p % 2 == 0)
			sum += p;
		n = p - n;
		++m;
	}
	printf("%ld\n", sum);
	return (0);
}
