#include <stdio.h>
/**
 * main - Entry point of program that finds and prints the largest
 * prime factor of the number
 * Return: Always 0
 */
int main(void)
{
	unsigned long num, fact, i;

	num = 612852475143;
	fact = 1;

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
		num = num / i;
		if (i > fact)
		fact = i;
		}
	}
	printf("%lu\n", fact);
	return (fact);
}
