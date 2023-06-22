#include "variadic_functions.h"

/**
 * print_strings - print strings followed by new line
 * @separator: separates the strings
 * @n: number of strings passed
 * Return: is void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int  i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			str = va_arg(strings, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(strings);
}
