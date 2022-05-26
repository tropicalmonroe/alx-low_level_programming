#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe -  function that prints a listint_t
 * @head: pointer first
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nu = 0;
	long int lo;

	while (head)
	{
		lo = head - head->next;
		nu++;

		printf("[%p] %d\n", (void *)head, head->n);
		if (lo > 0)
			head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nu);
}
