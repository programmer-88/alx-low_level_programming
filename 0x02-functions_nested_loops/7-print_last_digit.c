#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: number
 * Return: value of last digit
*/

int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		j = (-1 * j);
	}

	_putchar(j + '0');
	return (j);
}
