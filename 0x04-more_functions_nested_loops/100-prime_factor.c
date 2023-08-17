#include <stdio.h>
/**
 * main - largest prime facter of 612852475143
 * Return: 0
*/
int main(void)
{
	long int x, i, prime_factor

	prime_factor = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		prime_factor = 2;
		x = x / 2;
	}
	for (i = 3; i <= x / 2; i = i + 2)
	{
		while (x % i == 0)
		{
			prime_factor = i;
			x = x / i;
		}
	}
	if (x > 2)
		prime_factor = x;

	printf("%ld\n", prime_fzctor);
	return (0);
}
