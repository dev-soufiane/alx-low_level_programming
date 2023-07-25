#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j;
	char str;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i / 2; j++)
	{
		str = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = str;
	}
}
