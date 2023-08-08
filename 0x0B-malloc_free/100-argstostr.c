#include "main.h"

/**
 * argstostr - concatenate all arguments of a program
 * @ac: argument count
 * @av: argument value
 * Return: NULL if it fails otherwise pointer to new string
*/
char *argstostr(int ac, char **av)
{
	int i, len = 0, position = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i] + 1);
	}

	result = (char *)malloc(len * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position] = '\n';
		position++;
	}
	result[position - 1] = '\0';
	return (result);

}
