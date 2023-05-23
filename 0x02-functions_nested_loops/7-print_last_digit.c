#include "main.h"
/**
 * print_last_digit - find last digit of n
 * @r: number to give last digit
 * Return:last digit
 */
int print_last_digit(int r)
{
	int m;

	m = (r % 10);
	if (m < 0)
	{
		m = (-1 * m);
	}
	_putchar(m + '0');
	return (m);
}
