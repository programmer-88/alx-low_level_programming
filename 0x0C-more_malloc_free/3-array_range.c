#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: NULL if it fails otherwise pointer to new array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	len = (max + 1) - min;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		arr[i] = i;
	}
	arr[len] = '\0';
	return (arr);
}

