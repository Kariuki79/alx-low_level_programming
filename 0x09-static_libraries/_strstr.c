#include "main.h"
/**
 * _strstr - Entry point
 *
 * @haystack: input
 *
 * @needle: input
 *
 * Return: Always 0(success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (!*haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')
		{
			return (haystack);
		}
	}

		return (0);
}
