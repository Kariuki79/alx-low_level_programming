#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concantenates all arguments of the pointer
 * @av: Argument vector
 * @ac: Argument count
 *
 * Return: Pointer to a new string containing all arguments, NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length required */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* for null terminator */
	}

		/* allocate memory */
		str = malloc(sizeof(char) * len);
		if (str == NULL)
			return (NULL);

		/* Copy arguments to the new string */
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				str[index++] = av[i][j];

			str[index++] = '\n'; /* add newline for each for argument */
		}

		str[index] = '\0'; /* Null terminate */

		return (str);
}
