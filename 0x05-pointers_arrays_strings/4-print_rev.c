#include "main.h"

/**
 * print_rev - print a sting s in reverse
 * @s: string to reverse
 * Return: is void
 */

void print_rev(char *s)
{
	int i = 63;

	while (i > -1)
	{
		putchar(s[i]);
		i--;
	}
}
