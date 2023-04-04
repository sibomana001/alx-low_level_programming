#include "main.h"
#include <unistd.h>
/**
 * *_strcat - function that concatenates two strings.
 * _putchar - function that prints on screen
 * @dest: string to be concatenated on
 * @src: String to concatenate on dest string
 * @c: variable for _putchar function
 * Return:Concatenated string
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
	while (dest[length1] != '\0')
	{
	length1++;
	}
	while (src[length2] != '\0')
	{
	length2++;
	}
	for (a = 0; a <= length1; a++)
	{
	_putchar(dest[a]);
	}
	for (b = 0; b <= length2; b++)
	{
	_putchar(src[b]);
	}
	_putchar('\n');
	return (dest);
}
