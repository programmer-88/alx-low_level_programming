#include "main.h"

/**
 * main - adds two arguments passed to main
 *
 * @argc: argument count
 * @argv: argument value
 * Return: return 1 if non-numeric is passed otherwise 0
 */

int main(int argc, char  *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
