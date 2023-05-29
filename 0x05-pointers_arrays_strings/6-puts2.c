#include "main.h"

/**
 * puts2 - prints string and skips one
 * @str: string to print
 * Return: is void
 */

void puts2(char *str)
{
	int j = 0;
		while (str[j] != '\0')
		{
			if (j % 2 == 0)
			putchar(str[j]);
			j++;
		}

	putchar('\n');
}
