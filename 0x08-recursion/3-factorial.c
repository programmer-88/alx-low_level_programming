#include "main.h"

/**
 * factorial - return the factorial of n
 * @n: number to find factorial
 * Return: -1 if n is negative otherwise factorial of n
*/

int factorial(int n)
{
	int fact = 1;

	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	if (n > 0)
	{
		fact = fact * factorial(n - 1);
	}
	fact = fact * n;
	return (fact);
}
