#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0
 */

int get_endianness(void)
{
	int g;
	char *y;

	g = 1;
	y = (char *)&g;
	return (*y);
}
