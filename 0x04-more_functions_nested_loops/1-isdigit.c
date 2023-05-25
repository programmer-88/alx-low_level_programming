#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: integer to be checked
 * Return: 1 if c is digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
