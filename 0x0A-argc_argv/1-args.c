#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments counted starting from zero
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;/*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
