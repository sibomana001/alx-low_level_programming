#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: Number of equal diagonal  segments
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (j = 1; j <= i - 1; j++)
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
	}
}
