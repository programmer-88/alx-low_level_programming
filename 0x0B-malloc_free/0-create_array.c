#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: size of array
 * @c: char to fill
 * Return: pointer to array and NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}
