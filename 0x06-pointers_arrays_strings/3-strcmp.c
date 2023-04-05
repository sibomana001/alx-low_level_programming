#include "main.h"
/**
 * _strcmp - fa function that compares two strings
 * @s1: First string
 * @s2: Second String
 * Return: negative,zero or positive if s1 is less,match or greater to s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
	}
}
