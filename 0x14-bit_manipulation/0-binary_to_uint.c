#include "main.h"

/**
 * binary_to_uint - converts a binary to unsinged int
 * @b: pointer to binary character string
 * Return: converted number 0 on some failure
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0, base = 1;

	if (!valid_check(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (decimal);
}

/**
 * valid_check - checks if string is a valid binary string
 * @b: binary to check
 * Return: success if valid otherwise 0
*/

int valid_check(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
