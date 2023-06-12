#include "main.h"

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: conctenated string and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, k = 0, len = 0;
	char *cpy;

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

	cpy = malloc(sizeof(char) * len);

	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		cpy[k++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		cpy[k++] = s2[i];
	}
	return (cpy);
}
