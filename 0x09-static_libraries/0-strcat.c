#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 * @dest: string to be concatenated on
 * @src: String to concatenate on dest string
 * Return:Concatenated string
 */
char *_strcat(char *dest, char *src)
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
	for (a = 0; a <= length2; a++)
	{
	dest[length1 + a] = src[a];
	}
	return (dest);
}
