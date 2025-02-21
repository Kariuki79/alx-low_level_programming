#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer to a new string containing all arguments, or NULL if fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length required */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* For newline */
	}

	len++; /* For null terminator */

	/* Allocate memory */
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	/* Copy arguments into the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[index++] = av[i][j];

		str[index++] = '\n'; /* Add newline after each argument */
	}

	str[index] = '\0'; /* Null terminate */

	return (str);
}
