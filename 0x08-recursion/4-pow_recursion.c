#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to power of y
 * @x: base
 * @y: power
 * Return: -1 if y is negative, otherwise result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
