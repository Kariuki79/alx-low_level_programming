#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: source string
 *
 * Return: returns a pointer to the duplicated strng.
 * Returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	 int m, len = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	copy = malloc(sizeof(char) * (m + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len]; len++)
	{
		copy[len] = str[len];
	}
	return (copy);
}

