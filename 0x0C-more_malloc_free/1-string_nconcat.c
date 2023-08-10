#include "main.h"

/**
 * string_nconcat - conctatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: null if it fails otherwise pointer to allocated space
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		array[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		array[len++] = s2[i];

	array[len] = '\0';

	return (array);
}
