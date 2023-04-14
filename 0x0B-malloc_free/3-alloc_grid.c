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
