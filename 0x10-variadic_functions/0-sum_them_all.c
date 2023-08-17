#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: 0 if n is 0 otherwise summ of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int add = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(args, int);
	}

	va_end(args);
	return (add);
}
