#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: contant unsigned int
 * @...: variadic function
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int sum = 0;
	unsigned int i;

	va_start(x, n);
	
	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
