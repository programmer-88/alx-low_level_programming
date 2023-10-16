#include "main.h"

/**
 * _strlen - return length of a string
 * @s: check length
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	if (!s)
	{
		return (0);
	}
	i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
