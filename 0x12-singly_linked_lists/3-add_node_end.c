#include "lists.h"

/**
 * strlength - calculate the length of a string
 * @str: input string
 *
 * Return: length of the string
 */

size_t strlength(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * add_node - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: input string
 *
 * Return: address of the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlength(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
