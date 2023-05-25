#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times
 * Return: is void
 */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			a = 0;
			while (a <= i)
			{
				if (a == i)
				{
					putchar('\\');
				}
				else
				{
					putchar(' ');
				}
				a++;
			}
			putchar('\n');
			i++;
		}
	}
}
