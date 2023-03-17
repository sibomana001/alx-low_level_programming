#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	int num;

	for (num = '0'; num <= '9'; num++)
	putchar(num);
	for (letter = 'A'; letter <= 'F'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
