#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;


	if (h == NULL)
		return (-1);


	while (h)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
