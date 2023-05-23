#include "main.h"
/**
 * _islower - checks for lowercase letters
 * @c: character to be checked
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
