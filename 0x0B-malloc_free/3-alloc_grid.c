#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2D array
 * @width: width of array
 * @height: heighy of array
 * Return:if width or height is 0 return NULL else pointer to an array
 */

int **alloc_grid(int width, int height)
{
	int m;
	int n;
	int **h;

	if (width <= 0 || height <= 0)
		return (NULL);

	h = malloc(sizeof(int *) * height);

	if (h == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		h[m] = malloc(sizeof(int) * width);

		if (h[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(h[m]);
					free(h);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			h[m][n] = 0;
	}
		return (h);
}
