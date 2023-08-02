#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: The string to be printed in reverse
 *
 * This function takes a string as input and
 * recursively prints it in reverse order.
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
