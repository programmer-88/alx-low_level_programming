#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		i++;
	}
	putchar('\n');
}
