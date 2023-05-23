#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
