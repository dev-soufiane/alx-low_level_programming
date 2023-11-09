#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: Head pointer
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (NULL);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
