#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer to free list
 *
 * Return: void
 */

void free_listint2(listint_t **head);
{
        listint_t *nex;

	if (head == NULL)
		return;

        while (*head != NULL)
        {
                nex = (*head)->next;
                free(*head);
                *head = nex;
        }
}

