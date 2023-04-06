#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  program that adds numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int j;
	char *s;

	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		for (j = 0; j < strlen(s); j++)
		{
			if (s[j] < 48 || s[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (argc < 2)
			printf("0\n");
		else
			sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
