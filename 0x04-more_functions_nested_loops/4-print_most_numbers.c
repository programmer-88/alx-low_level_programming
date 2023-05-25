#include "main.h"
/**
 * print_most_numbers - prints 0-9 and skips 2 and 4
 * Return: is void
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
}
