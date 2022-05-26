#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: double pointer to the first node
 * @index: index of the node to remove
 * Return: success (1) fail (-1)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c;
	listint_t *next;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head =  next;
		return (1);
	}

	c = *head;
	for (x = 0; x < index; x++)
	{
		if (c->next == NULL)
			return (-1);
	}

	next = c->next;
	c->next = next ->next;
	free(next);
	return (1);

}
