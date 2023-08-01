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
	int idx_h, idx_n;

	for (idx_h = 0; haystack[idx_h] != '\0'; idx_h++)
	{
		idx_n = 0;

		if (haystack[idx_h] == needle[idx_n])
		{
			for (; needle[idx_n] != '\0'; idx_n++)
			{
				if (haystack[idx_h + idx_n] != needle[idx_n])
					break;
			}
			if (needle[idx_n] == '\0')
				return (haystack + idx_h);
		}
	}
	return (NULL);
}
