#include "main.h"

/**
 * is_prime_number - decide if a number is prime or not
 * @n: number to check
 * Return:1 if n is prime otherwise 0
*/

int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, i));
}

/**
 * prime_check - check if a number is prime or not
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is prime otherwise 0
*/

int prime_check(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_check(i - 1, n));
	}
}
