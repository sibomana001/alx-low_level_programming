#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  program that prints the minimum number of coins to make change for
 * an amount of money using 25, 10, 5, 2, and 1 cent coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int money, coin25, coin10, coin5, coin2, coin1, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		money = atoi(argv[1]);
		coin25 = money / 25;
		coin10 = (money % 25) / 10;
		coin5 = ((money % 25) % 10) / 5;
		coin2 = (((money % 25) % 10) % 5) / 2;
		coin1 = (((money % 25) % 10) % 5) % 2;
		num = coin25 + coin10 + coin5 + coin2 + coin1;
		printf("%d\n", num);
	}
	return (0);
}
