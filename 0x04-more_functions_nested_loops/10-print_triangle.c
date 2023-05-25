#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
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
