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
	int n, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (n = 1; n < argc; n++)
		{
			if (atoi(argv[n]))
			{
				sum += atoi(argv[n]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
