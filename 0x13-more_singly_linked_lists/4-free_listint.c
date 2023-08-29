#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *active;

	while (head != NULL)
	{
		active = head;
		head = head->next;
		free(active);
	}
}
