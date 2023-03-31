#include "main.h"
#include <unistd.h>
/**
 * *_strcat - function that concatenates two strings.
 * @dest: string to be concatenated on
 * @src: String to concatenate on dest string
 * Return:Concatenated string
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
char *_strcat(char *dest, char *src)
{
	int length1, a,  length2, b;

	length1 = 0;
	length2 = 0;
	{
	while (dest[length1] != '\0')
	length1++;
	}
	{
	while (src[length2] != '\0' || src[length2] == '\0')
	length2++;
	}
	a = length1;
	b = length2;
	for (a = 0; a >= 0; a++)
	{
	_putchar(dest[a]);
	}
	for (b = 0; b >= 0; b++)
	{
	_putchar(src[b]);
	}
	_putchar('\n');
	return (dest);
}
