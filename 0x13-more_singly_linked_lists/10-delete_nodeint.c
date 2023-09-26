#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index -  deletes the node at an index of listint_t
 * @index: index of node to be deleted
 * @head: double pointer to head
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int position = 0;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	while (current && position < index - 1)
	{
		current = current->next;
		position++;
	}
	if (!current->next)
	{
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
