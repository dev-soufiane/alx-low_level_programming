#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *p;
	char *s;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL && new_size > 0)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			exit(EXIT_FAILURE);
		}
		return (new_ptr);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	p = (char *)new_ptr;
	s = (char *)ptr;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = s[i];
	}
	free(ptr);

	return (new_ptr);
}
