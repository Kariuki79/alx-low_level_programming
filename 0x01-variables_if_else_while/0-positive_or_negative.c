#include <stdlib.h>
#include <time.h>
/**
 * main - prints whether the variable n is positive or negative
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 2 > 0)
	{
		pritf("%d if the number is greater than 0: is positive\n", n);
	}
	else
	{
		printf("%d if the number is less than 0: is positive\n", n);
	}
	return (0);
}
