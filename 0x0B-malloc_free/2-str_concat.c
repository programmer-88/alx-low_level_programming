#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: secong string
 * Return: NULL on failure otherwise pointer to allocated space
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, len = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	array = malloc(sizeof(char) * len);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		array[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		array[j++] = s2[i];
	}

	return (array);

}
