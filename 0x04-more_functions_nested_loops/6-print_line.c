#include "main.h"

/**
 * print_line - print line n long
 * @n: length of line
 * Return: is void
 */

void print_line(int n)
{
	int l = 0;

	while (n <= l)
	{
		putchar('_');
		n++;
	}
	putchar('$');
	putchar('\n');
}
