#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - returns the sum of all the data of a list
 * @head: pointer to the head of the list
 * Return: sum, otherwise 0 if failed (empty list)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;

	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
