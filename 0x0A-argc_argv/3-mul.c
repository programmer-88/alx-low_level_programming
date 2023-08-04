#include "main.h"

/**
 * main - multiply two arguments passed to the program
 * @argc: argument count
 * @argv: argument value
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int j, k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	k = atoi(argv[2]);

	printf("%d\n", j * k);

	return (0);
}
