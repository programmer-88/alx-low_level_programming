#include "main.h"

/**
 * _sqrt_recursion - return the natural number of n
 * @n: number to find square root
 * Return: -1 if sqrt is not available otherwise square root of n
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return(_sqrt(0,n));
}

/**
 * _sqrt - return the square root of n
 * @n: number to test
 * @x: squared number
 * Return: square rott of n
*/

int _sqrt(int n, int x)
{
	if (n > x / 2)	
	{
	return(-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
