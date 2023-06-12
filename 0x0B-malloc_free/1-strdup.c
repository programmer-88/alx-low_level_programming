#include "main.h"

/**
 * *_strdup - return a pointer to newly allocated space in memory
 * str: parameter string
 * Return: pointer to newly allocated string
 */

char *_strdup(char *str)
{
	int j;
	int len = strlen(str) + 1;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	cpy = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		cpy[j] = str[j];
	}
	return (cpy);
}
