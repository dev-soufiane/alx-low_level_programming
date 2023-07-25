#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: Pointer to the string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int ln, n;

	ln = 0;
	while (str[ln] != '\0')
		ln++;
	for (int i = ln / 2; i < ln ; i++)
	{
		n = (ln - 1) / 2;
		if (n % 2 == 1)
			_putchar(str[i]);
	}
	_putchar('\n');
}
