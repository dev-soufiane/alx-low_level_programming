#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character.
 *
 * Return: The first occurrence of character c in string s,
 * or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
