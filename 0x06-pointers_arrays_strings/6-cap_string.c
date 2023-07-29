#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: String to be capitalized.
 *
 * Return: The capitalized string.
 */

char *cap_string(char *str)
{
	int capitalize = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		capitalize = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
				|| str[i] == ';' || str[i] == '.' || str[i] == '!'
				|| str[i] == '?' || str[i] == '"' || str[i] == '('
				|| str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
	}
	return (str);
}
