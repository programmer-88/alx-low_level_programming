#include <stdio.h>
/**
 * main - Print alphabet apart from q and e
 * Description: use putchar to print
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
