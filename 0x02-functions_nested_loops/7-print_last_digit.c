#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number
 * @num: variable name
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	if (num >= 0)
		num = num % 10;
	else if (num < 0)
		num = (-num) % 10
_putchar(num);
return (num);
}
