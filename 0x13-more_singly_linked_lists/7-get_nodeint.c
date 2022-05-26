#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * @head: pointer of a listint
 * @index: unsigned int
 * Return: pointer to index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		head =  head->next;

		if (head ==  NULL)
			return (NULL);
	}

	return (head);
}
