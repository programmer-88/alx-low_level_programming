#include "main.h"

/**
 * _calloc - allocates a memory for an array using malloc
 * @nmemb: number of elements to allocate
 * @size: byte size
 * Return: null if it fails otherwise pointer to array allocated
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)

	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}

	return (array);
}
