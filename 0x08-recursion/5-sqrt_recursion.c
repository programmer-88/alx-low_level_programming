#include "main.h"

/**
 * _sqrt_recursion - find the natural square of a number
 * @n: number
 * Return: natural sqr of n and -1 if no natural square
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
