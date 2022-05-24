#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - func that adds a new node at the beginning of a list_t
 * @head: pointer at the beginning of the value
 * @str: pointer characters to be inserted
 * Return: NULL if func fails
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *new, *last;
        char *dup;
        int len;

        new = malloc(sizeof(list_t));

        if (new == NULL)
                return (NULL);

        dup = strdup(str);

        if (dup == NULL)
        {
                free(new);
                return (NULL);
        }

        for (len = 0; str[len];)
                len++;

        new->str = dup;
        new->len = len;
        new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

        return (*head);
}
