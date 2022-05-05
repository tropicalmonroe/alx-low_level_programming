#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings
 * @s1: The string to be concentrated upon
 * @s2: the string to be concentrated  to s1
 * Return: NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	char *strcon;
	int i, f = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	strcon = malloc(sizeof(char) * len);

	if (strcon == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		strcon[f++] = s1[i];

	for (i = 0; s2[i]; i++)
		strcon[f++] = s2[i];

	return (strcon);
}
