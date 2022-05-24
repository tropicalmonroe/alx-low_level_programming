#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t
 * @h: the lists list pointer
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t getnodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		
		else
			printf("[%d] %s\n", h->len, h->str);

		getnodes++;

		h = h->next;
	}

	return (getnodes);
}
