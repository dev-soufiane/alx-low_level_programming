#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head pointer
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *active;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		active = *head;
		*head = (*head)->next;
		free(active);
	}

	head = NULL;
}
