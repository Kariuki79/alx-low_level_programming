#include "main.h"
/**
 *  _islower - checks the lowercase character
 *  @c: This is the character to be checked
 *  Return: 1 if c is lowercase
 *  Returns: 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
