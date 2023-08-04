#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument value
 * Return: 0 for success
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i = 0;

	if (argc == 1)
	{
		printf("%d", argc - 1);
	}
	else
	{
		if (i <= argc)
		{
			i++;
		}

	printf("%d\n", argc - 1);
	}
	
	return (0);
}
