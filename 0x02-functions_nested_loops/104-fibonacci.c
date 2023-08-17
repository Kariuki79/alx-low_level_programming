#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers
* starting with 1 and 2
* Return: 0 
*/

int main(void)
{unsigned long int m;
	unsigned long int from = 1;
	unsigned long int to = 2;
	unsigned long int m = 1000000000;
	unsigned long int from2;
	unsigned long int from3;
	unsigned long int to2;
	unsigned long int to3;
	
	printf("%lu", from);
	for (m = 1; m < 91; m++)
	{
		printf(", %lu", to);
		aft += from;
		bef = to - from;
	}
	
	from2 = (from / l);
	from3 = (from % l);
	to2 = (to / l);
	to3 = (to % l);
	for (m = 92; m < 99; ++m)
	{
		printf(", %lu", to2 + (to3 / l));
		printf("%lu", to3 % l);
		to2 = to2 + from2;
		from2 = to2 - from2;
		to3 = to3 + from3;
		from3 = to3 - from3;
	}
	printf("\n");
	return (0);
}

