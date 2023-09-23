#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list_t list
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
