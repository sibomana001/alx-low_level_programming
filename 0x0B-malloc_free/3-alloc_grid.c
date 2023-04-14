#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function returning pointer to 2 dimensional array of integers
 * @width: Array width
 * @height: Array height
 * Return: NULL on failure or If width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == 0)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			grid[x][y] = 0;
	}
	return (grid);
	free(grid);
}
