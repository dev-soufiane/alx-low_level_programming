#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: an integer number.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, isEqual = 0;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) != *s2)
		{
			isEqual = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		i++;
		s2++;
	}
	return (isEqual);
}
