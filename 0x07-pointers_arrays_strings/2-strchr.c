#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character in the string
 * Return: s or null if character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
