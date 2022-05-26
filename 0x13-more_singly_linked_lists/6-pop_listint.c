#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: double pointer 
 *
 * Return: (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *kwanza;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	kwanza = *head;
	*head = kwanza->next;
	n = kwanza->n;
	free(kwanza);
	return (n);
}
