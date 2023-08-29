#include <string.h>
#include <stdlib.h>

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
