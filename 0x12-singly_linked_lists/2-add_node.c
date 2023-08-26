#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: input string
 *
 * Return: address of the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t x;

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	new_node->len = x;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
