#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concantenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concantenate.
 *
 * Return: A pointer to the newly allocated memory containing s1 followed by
 * the first n bytes of s2, null-terminated. If malloc fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concantenated string */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* copy n bytes of s2 into concat */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	/* Null-terminate the concantenated string */
	concat[i + j] = '\0';

	return (concat);
}
