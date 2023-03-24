#include "main.h"
/**
 * _islower - Entry point
 * @c: variable name
 * Description: function that checks for lowercase character
 * Return: Always 1 if 'c' is lowercase,otherwise returns 0
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
