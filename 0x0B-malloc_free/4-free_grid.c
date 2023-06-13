#include "main.h"

/**
 * free_grid - frees a 2D array previously created
 * @**grid: array created
 * @height: height of array
 * Return: is void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
