#include "main.h"

/**
 * print_rev - print a sting s in reverse
 * @s: string to reverse
 * Return: is void
 */

void print_rev(char *s)
{

	int len = 0, i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
