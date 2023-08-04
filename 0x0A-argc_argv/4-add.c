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
	return (0);
}
