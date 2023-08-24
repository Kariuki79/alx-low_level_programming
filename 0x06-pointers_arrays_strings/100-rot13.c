#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: str
 */
char *rot13(char *str)
{
	char alphabet[] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alphabet[] =
"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i = 0;

	while (str[i] != '\0')
	{
		char *pos = alphabet;
		char *rot13_pos = rot13_alphabet;

		while (*pos != '\0')
		{
			if (*pos == str[i])
			{
				str[i] = *rot13_pos;
				break;
			}
			pos++;
			rot13_pos++;
		}
		i++;
	}
	return (str);
}
