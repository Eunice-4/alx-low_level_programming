#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of listint_t
 * Return: number of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}
