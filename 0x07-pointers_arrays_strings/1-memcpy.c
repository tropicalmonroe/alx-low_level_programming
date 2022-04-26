#include "main.h"

/**
 * _memcpy - memory copy
 * @dest: input pointers to destination
 * @src: input pointers to sourse
 * @n: size of bytes
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
