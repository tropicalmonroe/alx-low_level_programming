#include "lists.h"

/**
 * get_dnodeint_at_index -  a function that returns the nth node
 * @head: pointer header in linkedlist
 * @index: index of the node nth
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return(NULL);

	while (head->prev != NULL)
		head = head->prev;

	x = 0;

	while (head != NULL)
	{
		if (x == index)
			break;

		head = head->next;
		x++;
	}
	return(head);
}
