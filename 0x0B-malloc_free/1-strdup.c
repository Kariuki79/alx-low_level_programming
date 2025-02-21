#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the given string.
 *
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if memory
 * allocation fails or STR is NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0'; /* Null-terminate the new string */
	return (dup);
}
