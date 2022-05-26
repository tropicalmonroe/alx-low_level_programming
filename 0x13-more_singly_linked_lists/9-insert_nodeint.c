#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: double pointer to the first node
 * @idx: index of the node
 * @n: value new node
 * Return: the indexed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *c;
       	listint_t *r;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		c = *head;
		for (x = 0; x < idx - 1 && c != NULL; i++)
		{
			c = c->next;
		}
		if (c == NULL)
			return (NULL);
	}
	r = malloc(sizeof(listint_t));
	if (r == NULL)
		return (NULL);

	r->n = n;

	if (idx == 0)
	{
		r->next = *head;
		*head = r;
		return (r);
	}

	r->next = c->next;
	c->next = r;
	return (r);
}


