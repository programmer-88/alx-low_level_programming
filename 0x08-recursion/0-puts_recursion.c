#include "main.h"

/**
 * _puts_recursion - print a sting followed by a new line
 * @s: string to print
 * Return: is void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
