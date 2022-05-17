#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers in a newline
 * @separator: string to be printed between numbers
 * @n: number of int passed to the func
 * @...: variadic func
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start (x, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end (x);
}
