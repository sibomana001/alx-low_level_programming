#include <stdio.h>
/**
 * main - Entry point of “Fizz-Buzz test” program
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
		printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		printf("%d ", i);
		}
		if (i == 100)
		{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
		printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz\n");
		}
		else
		printf("%d\n", i);
		}
	}
	return (0);
}
