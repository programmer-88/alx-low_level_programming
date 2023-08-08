#include "main.h"

/**
 * argstostr - concatenate all arguments of a program
 * @ac: argument count
 * @av: argument value
 * Return: NULL if it fails otherwise pointer to new string
*/
char *argstostr(int ac, char **av)
{
	int i, j, v, x = ac;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			x++;
		}

	}

	result = malloc(sizeof(char) * x + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	v = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[v++] = av[i][j];
		}
		result[v++] = '\n';

	}

	result[x] = '\0';
	return (result);

}
