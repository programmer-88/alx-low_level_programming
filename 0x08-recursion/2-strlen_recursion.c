#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check length
 * Return: void
 *
*/

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
	l += _strlen_recursion(s + 1);
	}
	return (l);
}
