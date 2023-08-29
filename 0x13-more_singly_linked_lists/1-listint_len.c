#include "lists.h"

/**
 * listint_len - returns the count of elements in a linked list
 * @h: list head pointer
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t totalElems = 0;

	while (h)
	{
		h = h->next;
		totalElems++;
	}

	return (totalElems);
}
