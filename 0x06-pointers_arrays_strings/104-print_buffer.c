#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - prints a buffer
 * @b: points buffer
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", (unsigned char)b[i + j]);
				if (j % 2 == 1)
				{
					printf(" ");
				}
			}
			else
			{
				printf("   ");
			}
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];
				if (isprint(c))
				{
					printf("%c", c);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
