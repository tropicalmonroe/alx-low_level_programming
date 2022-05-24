#include "lists.h"

/**
 * list_len - Finds the number of elements in linked list
 * @h: The linked list_t list pointer
 * @el: a counter var for node
 *
 * Return: The number of el
 */

size_t list_len(const list_t *h)
{
	size_t el = 0;

	while (h)
	{
		el++;
		h = h->next;
	}

	return (el);
}
