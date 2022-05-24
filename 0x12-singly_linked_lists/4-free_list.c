#include <stdlib.h>
#include "lists.h"

/**
 * free_list - its a free func
 * @head: beginning of pointer in a linked value
 */

void free_list(list_t *head)
{
	list_t wind;

	while (head)
	{
		wind = head->next;
		free(head->str);
		free(head);
		head = wind;
	}
}
