#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc function
 * @b: sizeof memory
 * Return: exit code 98 if it fails else pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (arr == NULL)
	{
		exit (98);
	}
	return (arr);
}
