#include "main.h"

/**
 * print_binary - prints the binary representation of n
 * @n: integer to print
 * Return: is void
*/

void print_binary(unsigned long int n)
{
	unsigned long int i, mask;
	int zero;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	zero = 1;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & mask) != 0)
		{
			zero = 0;
			_putchar('1');
		}
		else if (!zero)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

}
