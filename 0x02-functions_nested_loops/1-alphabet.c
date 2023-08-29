#include "main.h"

/**
 * print_alphabet - prints alphabet in lowecase
 * Return: 0 for success
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
