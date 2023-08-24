#include "main.h"
/**
 * leet - checks a function that encodes a string
 * @str: string to be encoded
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
	return str;
}
