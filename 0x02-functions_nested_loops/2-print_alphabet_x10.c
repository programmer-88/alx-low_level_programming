#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z' ; a++)
		{
			putchar(a);
		}
	putchar('\n');
	}
}
