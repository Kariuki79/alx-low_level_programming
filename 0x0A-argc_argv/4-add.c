#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if an number consists of only digits
 * @str: The string to check.
 *
 * Return: 1 if its a valid number, 0 otherwise.
 */
int is_number(char *str)
{
	int i = 0;

	if (str[i] == '\0')	/* Empty string invalid */
		return (0);

	while (str[i])
	{
		if (!isdigit(str[i]))	/* Check if a a character is a digit */
			return (0);
		i++;
	}
	return (i);
}

/**
 * main - Adds positive numbers given as arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 1 if any argument is not a number.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i])) /* Validate if it's a number */
		{
			printf("Error\n");
			return (i);
		}

		sum += atoi(argv[i]); /* Convert to int and add to sum */
	}

	printf("%d\n", sum);
	return (0);
}
