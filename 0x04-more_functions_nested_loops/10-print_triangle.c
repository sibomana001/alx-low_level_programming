#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int i, j, z;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = i; j >= 1; j--)
		{
		_putchar(' ');
		}
		for (z = size - i; z >= 1; z--)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}
