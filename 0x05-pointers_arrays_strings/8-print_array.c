#include "main.h"

/**
 * print_array - print n elemens of array integers
 * @a: array
 * @n: number of elements
 * Return: is void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
