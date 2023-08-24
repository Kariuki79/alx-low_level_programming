#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to be encoded into 1337
 * Return: str
 */

char *leet(char *str)
{
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";
	int i = 0;

	while (str[i] != '\0')
	{
		char *pos = leetLetters;
		char *num = leetNums;

		while (*pos)
		{
			if (*pos == str[i])
			{
				str[i] = *num;
				break;
			}
			pos++;
			num++;
		}
		i++;
	}
	return (str);
}
