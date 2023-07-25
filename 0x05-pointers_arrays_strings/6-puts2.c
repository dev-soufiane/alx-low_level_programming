#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: Pointer to the string
 * Return: Nothing
 */

void puts2(char *str)
{
	int ln, i;

	ln = 0;
	while (*(str + ln) != '\0')
		ln++;

	for (i = 0; i <= ln - 1; i++)
	{
		_putchar(*(str + i));
		str++;
	}
	_putchar('\n');
}
