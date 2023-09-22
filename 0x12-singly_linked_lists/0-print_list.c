#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements in a linked list
 * Return: number of nodes
 * @h: pointer to next node
 */
size_t print_list(const list_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			no_nodes++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			no_nodes++;
		}
		h = h->next;
	}
	return (no_nodes);
}
