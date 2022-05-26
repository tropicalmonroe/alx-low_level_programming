#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint -  function that returns the sum of all the data
 * @head: pointer firat node on the list
 *
 * Return:  all the data (n)
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
