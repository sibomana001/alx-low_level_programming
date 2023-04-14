#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 * @width: Array width
 * @height: Array height
 * Return: NULL on failure or If width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width == 0 || height == 0)
		return (NULL);
	grid = malloc(sizeof(int*) * width * height);

	if (*grid == 0)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			grid[x] = 0;
		}
		_putchar('\n');
	}
	return (grid);
}
			
