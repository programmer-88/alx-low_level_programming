#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times
 * Return: is void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j <= i)
			{
				if (j == i)
				{
					putchar('\\');
				}
				else
				{
					putchar(' ');
				}
				j++;
			}
			putchar('\n');
			i++;
		}
	}
}
