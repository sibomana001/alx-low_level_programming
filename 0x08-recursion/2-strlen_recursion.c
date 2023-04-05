#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be reversed
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (len);
	else
		return (1 + _strlen_recursion(s + 1));
}
