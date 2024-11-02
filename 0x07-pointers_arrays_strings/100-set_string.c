#include "main.h"

/**
 * set_string - Sets the value of a pointer to char
 *
 * @s: Double pointer to be updated
 *
 * @to: The char pointer to set as the value of  *s
 */
void set_string(char **s, char *to)
{
	*s = to;
}
