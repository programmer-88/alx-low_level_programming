#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: data type "
 * Return: is void
*/

void print_all(const char * const format, ...)
{
	va_list printanyth;

	char *str, *separator = "";
	int i = 0;

	va_start(printanyth, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
					printf("%s%c", separator, va_arg(printanyth, int));
					break;
			case 'i':
					printf("%s%d", separator, va_arg(printanyth, int));
					break;
			case 'f':
					printf("%s%f", separator, va_arg(printanyth, double));
					break;
			case 's':
					str = va_arg(printanyth, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
			default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(printanyth);
	printf("\n");
}
