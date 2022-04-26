#include "main.h"
/**
 * _strspn - Length of prefix substring
 * @s: input string
 * @accept: substring of accepted char
 * Return: c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept -1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
	

