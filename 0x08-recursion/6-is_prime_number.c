#include "main.h"

int checkprime(int n, int i);
/**
 * is_prime_number - function that checks if a number is prime or composite
 * @n: Input number
 * Return: 1 if prime, otherwisse 0
 */
int is_prime_number(int n)
{
	return (checkprime(n, 1));
}
/**
 * checkprime - checks if number is prime
 * @n: number to be checked
 * @i: iterate number
 * Return: 1 for prime, otherwise 0
 */
int checkprime(int n, int i)
{
	if (n < 1)
		return (0);
	else if (n % i == 0 && i > 1)
		return (0);
	else if ((n / i) < i)
		return (1);
	return (checkprime(n, i + 1));
}
