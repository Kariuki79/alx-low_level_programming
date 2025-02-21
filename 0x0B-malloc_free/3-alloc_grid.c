#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - Allocates memory for a 2D array of integers
 * @width: The number of columns in the grid
 * @height: The number of rows in the grid
 *
 * Return: Pointer to the allocated 2D array, or NULL or failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for row pointers */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory  for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if allocation fails */
			while (i--)
				free(grid[i]);
			free(grid);

			return (NULL);
		}

		/* Initialize grid with zeros */
		for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}

	return (grid);
}
