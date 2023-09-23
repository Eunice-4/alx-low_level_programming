#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @str: the string to be included in the new node
 * @head: A pointer to a pointer to the head of the list_t list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *neww_node, *current;

	if (!head)
	{
		return (NULL);
	}
	neww_node = malloc(sizeof(list_t));

	if (!neww_node)
	{
		return (NULL);
	}
	neww_node->str = strdup(str);

	if (!neww_node->str)
	{
		return (NULL);
	}
	neww_node->len = strlen(str);
	neww_node->next = NULL;

	if (!*head)
	{
		*head = neww_node;
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = neww_node;
	}
	return (neww_node);
}
