#include <stdio.h>
/**
 * main - Print alphabet using putchar function
 * Description: Print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
