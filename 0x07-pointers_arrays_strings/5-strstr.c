#include "main.h"

/**
 * _strstr - Find first occurrence of substring
 * @haystack: String to search within
 * @needle: Substring to find
 *
 * Return: Pointer to beginning of located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
