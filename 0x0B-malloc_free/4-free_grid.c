#include "main.h"

/**
 * free_grid - frees a 2d array
 * @grid: array
 * @height: collumn of array
 * Return: is void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
