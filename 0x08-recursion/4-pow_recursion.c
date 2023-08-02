#include "main.h"

/**
 * _pow_recursion - return the value of x raised to y
 * @x: number to raise
 * @y: power
 * Return: -1 if y is less than 0
*/

int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
	{
		return (-1);
	}

	if (y > 0)
	{
		pow = x * _pow_recursion(x, y - 1);
	}
	return (pow);

}
