#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars, initializes with specific char
 * @size: Size of the array
 * @c: Specific char to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
