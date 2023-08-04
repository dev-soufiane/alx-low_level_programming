#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: type char str
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * check_palindrome - Check if a string is a palindrome.
 * @s: type char str
 * @len: type int, length of the string
 * Return: 1 if palindrome, 0 if not.
 */

int check_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}

	else if (*s == *(s + len - 1))
	{
		return (check_palindrome(s + 1, len - 2));
	}

	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: type char str
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1);
	}

	return (check_palindrome(s, length));
}
