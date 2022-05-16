#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: printed name
 * @f: a pointer that pronts name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
