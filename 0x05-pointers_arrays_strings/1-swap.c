#include "main.h"

/**
 * swap_int - wap value of two integers
 * @a: first int
 * @b: second int
 * Return: is void
 *
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*b = i;
	*a = j;
}
