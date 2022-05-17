#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: strings passed to the function
 * @...: variadic func
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *s;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(x, char *);

		if (s == NULL)
			printf("(nil)");

		else
			printf ("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(x);
}
		
