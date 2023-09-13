#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: number of elements in the array array
 * @array: array
 * @cmp: pointer to the function that will do comparison
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i <size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return i;
		}
	}
	return -1;
}
