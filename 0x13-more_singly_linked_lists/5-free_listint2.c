#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node, *current;

	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
