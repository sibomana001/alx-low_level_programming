#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;
	char e = 'e';
	char q = 'q';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet != e && alphabet != q)
	putchar(alphabet);
	putchar('\n');
	return (0);
}
