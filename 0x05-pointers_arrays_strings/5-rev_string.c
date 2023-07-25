#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
}
