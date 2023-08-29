#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list
 * @head: head pointer
 * @n: integer to add to the new node
 *
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *active;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		active = *head;

		while (active->next != NULL)
		{
			active = active->next;
		}
		active->next = node;
	}

	return (node);
}
