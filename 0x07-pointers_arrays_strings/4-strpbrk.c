#include "main.h"

/**
 * _strpbrk - finds first matching char in string
 * @s: input string
 * @accept: characters matched
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

