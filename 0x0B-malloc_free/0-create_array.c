#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creatingan array of chars
 * @size: size of memory to print
 * @c: specified char to init the array
 * Rerurn: pointer
 */

char *create_array(unsigned int size, char c)
{
	char s;
	unsigned int x;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;

	return (s);
}
