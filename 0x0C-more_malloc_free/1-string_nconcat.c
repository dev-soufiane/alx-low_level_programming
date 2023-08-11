#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to a newly allocated space in memory
 * containing the concatenated string,
 * or NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size = 0;
	unsigned int s2_size = 0;
	unsigned int str_size;
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_size] != '\0')
		s1_size++;

	while (s2[s2_size] != '\0')
		s2_size++;

	if (n >= s2_size)
		n = s2_size;

	str_size = s1_size + n + 1;

	str = malloc(sizeof(char) * str_size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}
