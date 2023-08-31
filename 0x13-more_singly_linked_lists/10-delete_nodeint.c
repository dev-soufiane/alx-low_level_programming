#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a specific index in a linked list
 * @head: head pointer
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *active, *tmp;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	active = *head;

	while (active && cnt < index - 1)
	{
		active = active->next;
		cnt++;
	}
	if (active == NULL || active->next == NULL)
		return (-1);

	tmp = active->next;
	active->next = tmp->next;
	free(tmp);
	return (1);
}
