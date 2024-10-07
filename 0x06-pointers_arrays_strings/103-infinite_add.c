#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings
 *
 * @n1: First number (string)
 *
 * @n2: Second number(string)
 *
 * @r: Buffer store the result
 *
 * @size_r: Buffer size
 *
 * Return: Pointer to the result (r) and returns zero if not found
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, sum, carry = 0;
	int len1 = 0, len2 = 0;

	/* Find the length of both numbers */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Ensure the result can fit in the buffer */
	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);

	r[size_r - 1] = '\0';	/* Null terminate the result */
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;

	/* Perfom the last digits of both numbers */
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';	/* subtract '0' to convert char to int */
		if (j >= 0)
			sum += n2[j--] - '0';

		if (k < 0)
			return (0); /* Buffer overflow, return 0 */

		r[k--] = (sum % 10) + '0';	/* Store digit as a char */
		carry = sum / 10;	/* Calculate carry */
	}

	/* Shift result to the beginning of the buffer if needd */
	if (k >= 0)
		return (r + k + 1);

	return (r);
}
