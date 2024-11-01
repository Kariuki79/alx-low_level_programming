#include "main.h"
#include <stddef.h>	/* includes for NULL */

/**
 * _strstr - Locates a substring
 *
 * @haystack: The main string to be searched
 *
 * @needle: The substring to be found
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')	/* If needle is empty, return haystack */
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')	/* All characters in needle matched */
			return (haystack + i);
	}

	return (NULL);	/* No match found */
}
