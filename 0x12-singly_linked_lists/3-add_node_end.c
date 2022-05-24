#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - func that adds a new node at the end of a list_t
 * @head: pointer at the beginning of the value
 * @str: pointer characters to be inserted
 * Return: NULL if func fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *new, *last;
        int len;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next)
		last = last->next;
	last->next = new;
	return (new);
}
