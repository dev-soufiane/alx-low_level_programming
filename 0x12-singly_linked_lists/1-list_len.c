#include "lists.h"

/**
 * list_len - Calculates the number of elements in a list
 * @h: Pointer to the first node in list
 * Return: Length of the list
 */

size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
