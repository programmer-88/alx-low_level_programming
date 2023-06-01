#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array to reverse
 * @n: number of elements in array
 * Return: is void
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
