#include "main.h"

/**
 * _strancat: bytes of two strings
 * @dest: destination string
 * @src: source string 
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, s = 0;

	while (dest[i] != '\0')
		i++;

	while (src[s] != '\0' && n > s)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
