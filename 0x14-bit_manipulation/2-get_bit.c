#include "main.h"

/**
 * get_bit - return the value of a bit at given index
 * @n: number
 * @index: index given
 * Return: index of bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
