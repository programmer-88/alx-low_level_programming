#include "main.h"

/**
 * print_square - prints a square
 * @size: size of box
 * Return: is void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			putchar('#');

			j = 1;
			while (j < size)
			{
				putchar('#');
				j++;
			}
			putchar('\n');
			i++;
		}
	}
}
