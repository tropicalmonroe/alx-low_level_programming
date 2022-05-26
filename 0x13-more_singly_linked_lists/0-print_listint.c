#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements
 * @h: list all that requires printing
 * Return: nodes in size_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	const listint_t *c = h;

	while (c != NULL)
	{
		printf("%i\n", c->n);
		c = c->next;
		k++;
	}
	return (k);
}
		
