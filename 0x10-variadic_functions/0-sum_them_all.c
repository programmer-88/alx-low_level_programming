#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n:number of arguments
 * Return: sum of arguments 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list add;
		unsigned int i;
		int	sum = 0;

		va_start(add, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(add, int);
		}

		va_end(add);
		return (sum);
	}
}
