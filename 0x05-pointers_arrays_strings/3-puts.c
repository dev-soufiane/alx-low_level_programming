#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the string
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*(str + i));
		i++;
		str++;
	}
	_putchar('\n');
}
