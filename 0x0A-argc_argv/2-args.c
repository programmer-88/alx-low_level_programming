#include "main.h"

/**
 * main - prints the arguments passed to the program
 * @argc: argument count
 * @argv: argument value
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
