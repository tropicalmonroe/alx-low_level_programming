#include "main.h"

/**
 * _puts - check the code
 * @str: pointer 
 * Return: void
 */

void _puts(char *str);
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
