#include "main.h"
#include "string.h"

/**
 * binary_to_uint - converts a binary to unsinged int
 * @b: pointer to binary character string
 * Return: converted number 0 on some failure
*/

unsigned int binary_to_uint(const char *b)
{

	unsigned int dec = 0;
	int len = 0, base = 1;

	if (!valid_check(b))
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}

	while (len)
	{
		dec += (b[len - 1] - '\0' * base);
		base *= 2;
		len--;
	}

	return (dec);
}

/**
 * valid_check - checks if string is a valid binary string
 * @b: binary to check
 * Return: success if valid otherwise 0
*/

int valid_check(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		b++;
	}
	return (1);
}
