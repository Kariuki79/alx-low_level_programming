#include "main.h"
/**
 * rev_string - reverses a string
 * @s: stores the string to be reversed
*/

void rev_string(char *s)
{
	int length = 0;

	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];
		
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
