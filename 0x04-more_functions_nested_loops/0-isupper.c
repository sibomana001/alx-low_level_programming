#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: Variable name
 * Return: 1 if variable is upper, else 0
 */
int _isupper(int c)
{
	if (c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F')
		return (1);
	else if (c == 'G' || c == 'H' || c == 'I' || c == 'J' || c == 'K' || c == 'L')
		return (1);
	else if (c == 'M' || c == 'N' || c == 'O' || c == 'P' || c == 'Q' || c == 'R')
		return (1);
	else if (c == 'S' || c == 'T' || c == 'U' || c == 'V' || c == 'W' || c == 'X')
		return (1);
	else if (c == 'Y' || c == 'Z')
		return (1);
	else
		return (0);
}
