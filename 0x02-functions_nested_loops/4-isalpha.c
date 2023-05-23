#include "main.h"
/**
 * _isalpha - returns 1 or 0 depending on state of c
 * @c: variable to find alphabet
 * Return: 1 if c is a letter,lowercase or uppercase & 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
