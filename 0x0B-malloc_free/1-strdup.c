#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: duplicated string
 * Return: pointer if string is success
 */

char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	s = malloc(sizeof(char) * (len + 1));


	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)

		s[i] = str[i];

	s[len] = '\0';

	return (s);
}
