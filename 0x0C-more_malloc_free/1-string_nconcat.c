#include "main.h"

/**
 * *string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: max number of bytes of s2 to concatenate
 * Return: NULL if it fails otherwise pointer to new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, len = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		arr[len++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		arr[len++] = s2[i];
	}

	arr[len] = '\0';

	return (arr);
}
