#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: diagonals of a square
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int primaryDiagonalSum = 0;
	int secondaryDiagonalSum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		primaryDiagonalSum += a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		secondaryDiagonalSum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", primaryDiagonalSum, secondaryDiagonalSum);
}
