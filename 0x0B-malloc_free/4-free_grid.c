#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated for a 2D array of integers
 * @grid: pointer to the 2D array
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
