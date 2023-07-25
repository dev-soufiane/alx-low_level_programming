#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string
 * Return: Nothing
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int len, last_index;

	len = _strlen(s);
	last_index = len - 1;

	while (last_index >= 0)
	{
		_putchar(*(s + last_index));
		last_index--;
	}
	_putchar('\n');
}
