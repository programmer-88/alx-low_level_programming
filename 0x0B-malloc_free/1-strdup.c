#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated memory
 * which contains a copy of the string parameter
 * @str: string to copy
 * Return: null if error occurs otherwise a pointer to array
*/

char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		size++;
		i++;
	}


	array = malloc(sizeof(char) * size + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	return (array);

}
