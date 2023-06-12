#include "main.h"

/**
 * *create_array - create array of char and initialize with char
 * @size: size of array
 * @c: character to initialize
 * Return: poiter to array and NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);
		if (arr == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < size; j++)
		{
			arr[j] = c;
		}
	}
	return (arr);
}

