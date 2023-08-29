#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character in the string
 * Return: s or null if character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if ( s[i] == c || c == '\0')
		{
			return (s + i);
		}
		s++;
	}
	return ('\0');
}
