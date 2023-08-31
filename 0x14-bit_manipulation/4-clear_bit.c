#include "main.h"

/**
 * clear_bit - sets velue of a bit to 0
 * @n: number
 * @index: index given
 * Return: 1 if it worked or -1 on failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
