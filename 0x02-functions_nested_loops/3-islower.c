#include "main.h"
#include <ctype.h>

/**
 * check for lowercase character
 * @c: character to check
 * Return: 1 if c is lowercase otherwise 0
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
