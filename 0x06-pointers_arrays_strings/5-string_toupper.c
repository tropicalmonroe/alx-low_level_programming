#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to modify.
 *
 * Return: s modified.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; str[i] !='\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}
