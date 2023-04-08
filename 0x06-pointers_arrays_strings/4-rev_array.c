#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: Array name
 * @n: number of array elements to reverse
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n; i > 0; i--)
	{
		j = 0;
		do {
		a[j] =  a[i - 1];
		} while (j < n);
			j++;
	}
}
