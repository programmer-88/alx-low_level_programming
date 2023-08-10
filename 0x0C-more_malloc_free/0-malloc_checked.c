#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: size of amount of bytes to allocate
 * Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	
	if (array == NULL)
	{
		exit(98);
	}

	return (array);
}
