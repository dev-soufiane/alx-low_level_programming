#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0,
 * or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *my_array;
	unsigned int i;

	if (nmemb <= 0 | size <= 0)
		return (NULL);

	my_array = malloc(nmemb * size);

	if (my_array == NULL)
		return (NULL);

	unsigned char *arr = (unsigned char *)my_array;

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
