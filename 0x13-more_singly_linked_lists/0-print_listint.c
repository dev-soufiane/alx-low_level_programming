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

	listint_t *tmp = NULL;

	if (h == NULL)
		return (-1);

	tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
