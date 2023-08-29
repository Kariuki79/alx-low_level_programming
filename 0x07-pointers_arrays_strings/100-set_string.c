#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer
 * @to: pointer to a string
 */ 
void set_string(char **s, char *to)
{
	if (s == NULL)
	{
		return;
	}
	if (*s != NULL)
	{
		free(*s);
	}
	*s = (char *)malloc(strlen(to) + 1);
	if (*s != NULL)
	{
		strcpy(*s, to);
	}
}
