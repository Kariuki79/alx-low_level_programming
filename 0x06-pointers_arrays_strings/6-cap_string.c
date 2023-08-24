#include "main.h"
/**
 * separator - checks whether a character is a seperator
 * *cap_string - capitalizes all words of a string
 * @ch: string to be capitalized
 * Return: i if ch is a character or 0 if not
 */
int separator(char ch)
{
	switch (ch)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
