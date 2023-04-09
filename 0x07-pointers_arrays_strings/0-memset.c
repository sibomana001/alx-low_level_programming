#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: string to be filled
 * @b: byte for filling
 * @n: filling space
 * Return: Filled string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] != '\0' && i < n)
	{
		s[i] = 'b';
		i++;
	}
	return (s);
}
