#include "main.h"
/**
 * int _islower - Entry point
 * Description: function that checks for lowercase character
 * Return: 1 if 'c' is lowercase,otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
 
