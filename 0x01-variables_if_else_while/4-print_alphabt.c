#include <stdio.h>
/**
* main - prints the alphabet except q an e
* * Return: 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
