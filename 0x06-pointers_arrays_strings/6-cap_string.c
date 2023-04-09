#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * letters of a string to uppercase.
 * @n: input sting
 * Return: capitalized string
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		n[0] = n[0] - 32;
		if (n[i] == ' ' || n[i] == '\n' || n[i] == ',' || n[i] == ';')
			n[i + 1] = n[i + 1] - 32;
		if (n[i] == '.' || n[i] == '!' || n[i] == '?' || n[i] == '"')
			n[i + 1] = n[i + 1] - 32;
		if (n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
			n[i + 1] = n[i + 1] - 32;
		i++;
	}
	return (n);
}
