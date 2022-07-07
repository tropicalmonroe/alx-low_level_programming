#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * @h: head node pointer
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h);
{
	int counting;

	counting = 0;

	if (h == NULL)
		return(counting);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counting++;
		h = h->next;
	}

	return(counting);
}
