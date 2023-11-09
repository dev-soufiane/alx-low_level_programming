#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: Head pointer
 *
 * Return: Number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_count = 0;

	while (h)
	{
		h = h->next;
		elem_count++;
	}

	return (elem_count);
}
