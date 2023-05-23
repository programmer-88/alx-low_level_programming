#include "main.h"
/**
 * int _isalpha(int c);
 * Description: using isalpha to find alphabet
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
