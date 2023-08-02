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
	while (*haystack != '\0')
	{
		char *ptr_h = haystack;
		char *ptr_n = needle;

		while (*ptr_n != '\0' && *ptr_h == *ptr_n)
		{
			ptr_h++;
			ptr_n++;
		}
		if (*ptr_n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
