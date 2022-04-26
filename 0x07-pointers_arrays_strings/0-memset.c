#include "main.h"
/**
 * _memset: Fill memory with byte
 * @s: input char
 * @b: constant char
 * @n: number of bytes
 * Return: s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

