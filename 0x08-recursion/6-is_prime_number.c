#include "main.h"

/**
 * prime_check - checks if a number is prime
 * @n: number to check
 * @c: counter
 * Return: 1 if prime otherwise 0
 */

int prime_check(int n, int c)
{
	if (n == c)
	{
		return (1);
	}
	else if (n % c != 0)
	{
		return (prime_check(n, c + 1));
	}
	else
	{
		return (0);
	}
}


/**
 * is_prime_number - determine if n is a prime number
 * @n: number to check
 * Return: i if n is prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_check(n, 2));
	}
}
