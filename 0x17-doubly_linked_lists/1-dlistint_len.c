#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a linked
 * @h: pointer head of a node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counting;

	counting = 0;

	if (h == NULL)
		return(counting);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counting++;
		h = h->next;
	}
	return(counting);
}
