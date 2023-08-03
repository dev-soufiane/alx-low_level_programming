#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: The string to calculate the length of
 *
 * This function takes a string as input and recursively calculates its length.
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
