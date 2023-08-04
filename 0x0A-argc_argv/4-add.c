#include "main.h"

/**
 * main - adds two positive numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc = 0)
	{
		printf("0\n");
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
