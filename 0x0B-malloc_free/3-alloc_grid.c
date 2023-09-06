#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a
 * 2 dimensional array of intergers
 * @width: array width
 * @height: array height
 * Return: pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int m, n, p, q;

	int **matrix;

		if (width <= 0 || height <= 0)
			return (NULL);
	matrix = malloc(sizeof(int *) * height);

		if (matrix == NULL)
		{
			free(matrix);
				return (NULL);
		}
		for (m = 0; m < height; m++)
		{
			matrix[m] = malloc(sizeof(int) * width);

			if (matrix[m] == NULL)
			{
				for (n = m; m >= 0; m--)
				{
					free(matrix[n]);
				}

				free(matrix);
				return (NULL);
			}
		}

		for (p = 0; p < height; p++)
		{
			for (q = 0; q < width; q++)
			{
				matrix[p][q] = 0;
			}
		}
		return (matrix);
}
