#include "main.h"

/**
 * wildcmp - compares two strings and checks if they are considered identical.
 *
 * @s1: The first string.
 *
 * @s2: The second string (can contain the wildcard '*').
 *
 * Return: 1 if strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* Both string end */
		return (1);
	if (*s2 == '*') /*  Handle wildcard */
	{
		if (*(s2 + 1) == '\0') /** If * is the last character,
					*  it matches  anything
					*/

			if (*s2 != '\0' && wildcmp(s1 + 1, s2)) /** Match * with
								  * current char
								  */
				return (1);
		return (wildcmp(s1, s2 + 1)); /* Skip the * */
	}
	if (*s1 == *s2) /* If the characters match */
		return (wildcmp(s1 + 1, s2 + 1));
	return (0); /* characters don't match */
}
