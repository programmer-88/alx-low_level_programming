#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: string to check
 * Return: 1 if s is palindrome otherwise 0
*/

int is_palindrome(char *s)
{
	int i = 0;
	int l = strlen(s) - 1;

	return (check_palindrome(s, i, l));
}

/**
 * check_palindrome - check if a string is palindrome
 * @s: string to check
 * @i: lower variable
 * @l: reducer variable
 * Return: 1 if s is palindrome otherwise 0
*/

int check_palindrome(char *s, int i, int l)
{
	if (s == NULL || i < 0 || l < 0)
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
	if (s[i] == s[l])
	{
		return (check_palindrome(s, i + 1, l - 1));
	}
	return (0);
}
