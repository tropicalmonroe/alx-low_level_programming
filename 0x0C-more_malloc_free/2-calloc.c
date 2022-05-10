#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number of elements
 * @nmemb: The number of elements
 * @size: The byte size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	s = m;

	for (i = 0; i < (size * nmemb); i++)
		s[i] = '\0';

	return (m);
}
