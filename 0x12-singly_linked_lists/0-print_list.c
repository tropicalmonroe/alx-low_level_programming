#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of list.
 * @h: The list_t list pointr
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%d] %s", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
