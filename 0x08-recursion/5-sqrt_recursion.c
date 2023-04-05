#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Input number
 * Return: squaroot, if not available -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural square root
 * @n: number to calculate square root
 * @i: iterate number
 * Return: natural square rooot
 */
int _sqrt(int n, int i)
{
	int sqrt = i *i;

	if (sqrt > n)
		return (-1);
	else if (sqrt == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
