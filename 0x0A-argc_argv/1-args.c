#include "main.h"

/**
 * main - print number of arguments passed to it
 * @argc: argument count
 * @argv: arugment value
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
