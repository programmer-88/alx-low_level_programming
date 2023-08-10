#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: size of amount of space to allocate
 * Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(sizeof(array) * b);
	if (array == NULL)
	{
		exit (98);
	}

	return (array);
}
