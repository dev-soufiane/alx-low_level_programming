#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = malloc(width * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));

		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
