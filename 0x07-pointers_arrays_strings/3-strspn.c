#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string_one
 * @accept: string_two
 * Return: bytes in segment of s which consist only of bytes frm accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
			}
		}
	}
	return (n);
}
