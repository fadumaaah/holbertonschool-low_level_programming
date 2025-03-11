#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: The number of columnns in grid
 * @height: The number of rows in grid
 *
 * Return: A  pointer to a 2 dimensional array of integers,
 *		or NULL if width or height is negative.
 */


int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int h;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(width * sizeof(int));
		if (grid[w] == NULL)
		{
			for (h = 0; h < w; h++)
				free(grid[h]);

			free(grid);
			return (NULL);

		}
		for (h = 0; h < width; h++)
			grid[w][h] = 0;

	}

	return (grid);
}
