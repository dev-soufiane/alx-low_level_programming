#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: Pointer to matching byte in @s or NULL if not found.
 */

char *_strpbrk(char *s, char *accept)
{
	int s_index, accept_index;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				return (s + s_index);
			}
		}
	}
	return (NULL);
}
