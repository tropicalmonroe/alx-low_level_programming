#include "main.h"

/**
 * _isupper - checks for uppercaste character
 *@c: the character to be tracked
 *Return: 1 if character uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
