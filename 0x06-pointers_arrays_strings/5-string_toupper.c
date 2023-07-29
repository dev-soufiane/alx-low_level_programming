#include "main.h"

/**
 * string_toupper -  Changes all lowercase letters of a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: The modified string with all letters converted to uppercase.
 */

char *string_toupper(char *str)
{
	int i = 0;
	char c;

	while (*(str + i) != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i];
			str[i] = c - 32;
		}
		i++;
	}
	return (str);
}
