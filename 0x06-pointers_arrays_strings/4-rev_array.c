#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: integer to be reversed
 * @n: number of elements of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int s, e;

	s = 0;
	e = n - 1;
	while (s < e)
	{
		int t = a[s];
		a[s] = a[e];
		a[e] = t;
		s++;
		e--;
	}
}
