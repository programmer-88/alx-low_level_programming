#include "main.h"

/**
 * main - multiplies two arguments passed to main
 *
 * @argc: argument count
 * @argv: argument value
 * Return: product or 1 "and error" if arguments are no arguments
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
	printf("%d\n", prod);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
