#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: Input string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
