#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	for (i = 1; i < argc; i++)
	{
		product = product * atoi(argv[i]);
	}
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", product);
	}
	return (0);
}
