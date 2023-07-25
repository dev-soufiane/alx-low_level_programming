#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		i++;
	while (i--)
		_putchar(*(s + i));
	_putchar('\n');
}
