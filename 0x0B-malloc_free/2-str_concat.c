#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Return: Pointer to a newly allocated space in memory
 * containing the concatenated strings, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int size_s1 = 0;
	int size_s2 = 0;
	int str_size;

	while (*s1)
	{
		size_s1++;
		s1++;
	}
	while (*s2)
	{
		size_s2++;
		s2++;
	}
	str_size = size_s1 + size_s2;
	p = malloc(sizeof(char) * (str_size + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
	{
		*(p + i) = *(s1 - size_s1 + i);
	}
	for (i = 0; i < size_s2; i++)
	{
		*(p + size_s1 + i) = *(s2 - size_s2 + i);
	}
	p[str_size] = '\0';
	return (p);
}
