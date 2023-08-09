#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Create a duplicate of a given string
 * @str: Pointer to the string to be duplicated
 *
 * Return: Pointer to the duplicated string,
 * or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *ptr;
	int size_str;
	int i;

	if (str == NULL)
		return (NULL);

	size_str = 0;

	while (str[size_str] != '\0')
	{
		size_str++;
	}

	ptr = malloc(sizeof(char) * (size_str + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size_str; i++)
	{
		ptr[i] = str[i];
	}

	ptr[size_str] = '\0';

	return (ptr);
}
