#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointr to the head
 * @n: value of nodes
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neww_node, *current;

	neww_node = malloc(sizeof(listint_t));
	neww_node->n = n;
	neww_node->next = NULL;

	if (!neww_node)
	{
		return (NULL);
	}
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
