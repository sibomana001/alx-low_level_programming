#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: Array name
 * @n: number of array elements to reverse
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < n)
	{
		a[i] = a[j];
		i++;
		j--;
	}
}
