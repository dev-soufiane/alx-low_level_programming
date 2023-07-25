#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: Pointer to the string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int ln, n, i;

	ln = 0;
	while (str[ln] != '\0')
		ln++;
	n = (ln - 1) / 2;
	for (i = n + 1; i < ln ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
