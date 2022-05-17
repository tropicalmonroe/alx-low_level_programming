#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list x);
void print_int(va_list x);
void print_float(va_list x);
void print_string(va_list x);

/**
 * struct prints - meaning of struct_prints
 * @s: data type
 * @p: pointer printy
 */

typedef struct prints
{
	char *s;
	void (*p)(va_list x);
} prints_f;

#endif
