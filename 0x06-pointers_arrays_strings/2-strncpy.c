#include "main.h"
/**
 * *_strncpy - function that copies a string.
 * @dest: string to be concatenated on
 * @src: String to concatenate on dest string
 * @n: number of characters from src
 * Return:Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length1, a,  length2;

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
	if (n <= length2)
	{
		for (a = 0; a < n; a++)
		{
		dest[a] = src[a];
		}
	}
	else
	{
		for (a = 0; a <= length2; a++)
		{
			dest[a] = src[a];
		}
	}
	return (dest);
}
