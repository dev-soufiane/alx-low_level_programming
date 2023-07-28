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
	int isEqual = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			isEqual = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (isEqual);
}
