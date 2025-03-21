#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit - checks if a string consists of only digits
 * @s: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
/**
 * print_error - Prints "Error" and exits with status 98.
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - MUltiplies two large numbers represented as strings
 * @num1: First number as a string
 * @num2: Second number as a string
 *
 * Return: Pointer to the result as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int *result, i, j, n1, n2, sum;
	char *final_result;

	/* Allocate memory for result (initialized to 0) */
	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		print_error();

	/* Mulitiply digit by digit */
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			n1 = num1[i] - '0';
			n2 = num2[j] - '0';
			sum = result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	/* Convert the result into string */
	final_result  = malloc(len1 + len2 + 1);

	if (!final_result)
		print_error();

	i = 0, j = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	while (i < len1 + len2)
		final_result[j++] = result[i++] + '0';

	final_result[j] = '\0';
	free(result);

	/* if the result is empty, return "0" */
	return (j == 0 ? strdup("0") : final_result);
}

/**
 * main - Entry point, multiplies two positive numbers.
 * @argc: Numbers of arguments
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 error.
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);


	return (0);
}
