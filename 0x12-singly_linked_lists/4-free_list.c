#include <stdlib.h>
#include "lists.h"

/**
 * free_list - its a free func
 * @head: beginning of pointer in a linked value
 */

void free_list(list_t *head)
{
	list_t *a, *wind;

	a = head;

	while (a != NULL)
	{
		wind = a->next;
		free(a->str);
		free(a);
		a = wind;
	}
}
