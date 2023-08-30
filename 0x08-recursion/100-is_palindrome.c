#include "main.h" /* Assuming main.h contains necessary includes */

/**
 * check_pal - checks if a substring is a palindrome
 * @s: string to check
 * @start: starting index of the substring
 * @end: ending index of the substring
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Base case: substring is a palindrome */
	}

	if (s[start] != s[end])
	{
		return (0); /* Characters don't match, not a palindrome */
	}
	return (check_pal(s, start + 1, end - 1)); /* Recursively check characters */
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 if it's not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s); /* Calculate the length of the string */

	return (check_pal(s, 0, len - 1));
}

