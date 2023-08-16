<<<<<<< HEAD
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
*/

int main(void)
{
	int a = 0;
	long b = 1, c = 2;

	while(a < 50)
	{
		if (a == 0)
		{
			printf("%ld", b);
			else if (a == 1)
				printf(", %ld", c);
			else
			{
				c += b;
			       b = c - b;
		       printf(", %ld", c);
			}
			++i;
		}
		printf("\n");
		retunr (0);
}
=======
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
long int a, b, c, next;
b = 1;
c = 2;
for (a = 1; a <= 50; ++a)
{
if (b != 20365011074)
{
printf("%ld, ", b);
}
else
{
printf("%ld\n", b);
}
next = b + c;
b = c;
c = next;
}
return (0);
}
>>>>>>> 52d2c2c1adaf7cda0a92e5b27d8dc91a14bc1432
