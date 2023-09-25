#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer to head of listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		no_nodes++;
		h = h->next;
	}
	return (no_nodes);
}
