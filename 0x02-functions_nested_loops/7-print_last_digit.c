#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number
 * @num: variable name
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	{
		last = -last;
	}
_putchar(last + '0');
return (last);
}
