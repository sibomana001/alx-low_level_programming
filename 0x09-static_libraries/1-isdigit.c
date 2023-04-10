#include "main.h"
/**
 * _isdigit - function that checks for a digit.
 * @c: Variable name
 * Return: 1 if variable is digit, else 0
 */
int _isdigit(int c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5')
		return (1);
	else if (c == '6' || c == '7' || c == '8' || c == '9')
		return (1);
	else
		return (0);
}
