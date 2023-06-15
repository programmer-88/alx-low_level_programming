#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: sizeof array
 * Return: NULL if _calloc fails otherwise pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr =  malloc(nmemb * size);

	if (arr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			arr[i] = 0;
		}

		return (arr);
	}
	else
		return (NULL);
}
