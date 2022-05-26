#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t
 * @head: double pointer start list
 *
 * Return: node of reversed pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *before;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	before = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}
	*head = before;
	return (*head);
}
