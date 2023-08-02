#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print a sting in reverse
 * @s: string to reverse
 * Rerutn: is void 
*/

void _print_rev_recursion(char *s)
{
	
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
