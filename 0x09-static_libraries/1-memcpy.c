#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: destination string
 * @src: source of bytes to be copied
 * @n: size of bytes to be copied
 * Return: string with copied data
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;


	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
