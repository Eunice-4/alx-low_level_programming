#include "lists.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int n;

	if (!*head)
	{
		return (0);
	}
		n = (*head)->n;
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	return (n);
}
