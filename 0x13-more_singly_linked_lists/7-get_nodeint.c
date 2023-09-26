#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of list
 * @index: index of the node to return
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	unsigned int position = 0;

	current = head;

	while (current && position < index)
	{
		current = current->next;
		position++;
	}
	if (!current)
	{
		return (NULL);
	}
	else
	{
		return (current);
	}
}
