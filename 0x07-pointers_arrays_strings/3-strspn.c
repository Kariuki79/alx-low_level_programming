#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The input string
 *
 * @accept: The characters to match in the prefix
 *
 * Return: The number of bytes in the initial segment of s
 * which consists only of bytes  from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found_match;

	for (i = 0; s[i] != '\0'; i++)
	{
		found_match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found_match = 1;
				break;
			}
		}
		if (!found_match)
			break;
	}

	return (count);
}
