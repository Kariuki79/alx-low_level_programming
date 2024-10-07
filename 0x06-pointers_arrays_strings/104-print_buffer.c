#include <stdio.h>
#include <ctype.h>

/**
 * print_hex_part - Prints the hexadecimal part of the buffer.
 * @b: The pointer to the buffer.
 * @i: The current index in the buffer.
 * @size: The total size of the buffer.
 */
void print_hex_part(char *b, int i, int size)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			printf("%02x", (unsigned char)b[i + j]);
			if (j % 2 == 1)
				printf(" ");
		}
		else
		{
			printf("   ");
		}
	}
}

/**
 * print_ascii_part - Prints the ASCII part of the buffer.
 * @b: The pointer to the buffer.
 * @i: The current index in the buffer.
 * @size: The total size of the buffer.
 */
void print_ascii_part(char *b, int i, int size)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			char c = b[i + j];

			if (isprint((unsigned char)c))
				printf("%c", c);
			else
				printf(".");
		}
	}
}

/**
 * print_buffer - Prints a buffer in both hex and ASCII formats.
 * @b: The pointer to the buffer.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the starting position in hex (8 chars) */
		printf("%08x: ", i);

		/* Print the hex part */
		print_hex_part(b, i, size);

		/* Print the ASCII part */
		print_ascii_part(b, i, size);

		/* Newline after each line */
		printf("\n");
	}
}

