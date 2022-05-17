#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list x);
void print_int(va_list x);
void print_float(va_list x);
void print_string(va_list x);
void print_all(const char * const format, ...);

/**
 * print_char - Prints character
 * @x: printed char pointers
 */

void print_char(va_list x)
{
	char l;

	l = va_arg(x, int);
	printf("%c", l);
}

/**
 * print_int - Prints whole number
 * @x: printed integers int
 */

void print_int(va_list x)
{
	int n;

	n = va_arg(x, int);
	printf("%d", n);
}

/**
 * print_float - Prints floating integer
 * @x: printed variadic float
 */

void print_float(va_list x)
{
	float h;

	h = va_arg(x, double);
	printf("%f", h);
}

/**
 * print_string - Prints string chars
 * @x: variadic strings printed
 */

void print_string(va_list x)
{
	char *s;

	s = va_arg(x, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - Prints all on a new line
 * @format: string for an argument
 * @...: A variadic function
 */

void print_all(const char * const format, ...)
{
	va_list x;
	int i = 0;
	int k = 0;
	char *separator = "";

	priner_f func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(x, format);

	while (format && (*(format + i)))
	{
		k = 0;

		while (k < 4 && (*(format + i) != *(funcs[k].symbol)))
			k++;

		if (k < 4)
		{
			printf("%s", separator);
			func[k].print(x);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(x);
}
