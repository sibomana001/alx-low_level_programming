#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: nothing
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = lenght; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
