#include <stdio.h>
/**
 * main -print base 10 separated by comma
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}

