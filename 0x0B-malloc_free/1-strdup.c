#include "main.h"

/**
 * *_strdup - return a pointer to newly allocated space in memory
 * @str: parameter string
 * Return: pointer to newly allocated string
 */

char *_strdup(char *str)
{
	int j, len;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		len++;
	}
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len; j++)
	{
		cpy[j] = str[j];
	}
	cpy[len] = '\0';

	return (cpy);
}
