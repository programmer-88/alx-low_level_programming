#include "main.h"

/**
 * print_numbers - uses putchar to print 0-9
 * Return: is void
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}

