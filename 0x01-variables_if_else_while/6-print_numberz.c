#include <stdio.h>
/**
 * main - print base 10 using ASCII
 * Description: print numbers
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
