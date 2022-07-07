#include "lists.h"

/**
 * free_dlistint - a function that frees
 * @head: pointer header
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t freeone;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while((freeone = head) != NULL)
	{
		head = head->next;
		free(freeone);
	}
}
