#include "main.h"

/**
 * print_line - print line n long
 * @n: length of line
 * Return: is void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			putchar('_');
			i++;
		}
		putchar('\n');
	}
}
