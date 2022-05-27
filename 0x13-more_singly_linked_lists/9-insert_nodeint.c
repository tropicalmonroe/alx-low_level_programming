#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: double pointer to the first node
 * @idx: index of the node
 * @n: value new node
 *
 * Return: the indexed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *now;
       	listint_t *clean;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		now = *head;
		for (x = 0; x < idx - 1 && now != NULL; x++)
		{
			now = now->next;
		}
		if (now == NULL)
			return (NULL);
	}
	clean = malloc(sizeof(listint_t));
	if (clean == NULL)
		return (NULL);
	clean->n = n;
	if (idx == 0)
	{
		clean->next = *head;
		*head = clean;
		return (clean);
	}
	clean->next = now->next;
	now->next = clean;
	return (clean);
}

