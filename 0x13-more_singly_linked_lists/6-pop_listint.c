#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head pointer
 *
 * Return: the head node’s data (n),
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *active;
	int num;

	if (head == NULL)
		return (0);

	active = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(active);

	return (num);
}
