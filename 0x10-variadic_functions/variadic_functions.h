#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_s(va_list x);
void print_i(va_list x);
void print_c(va_list x);
void print_k(va_list x);

/**
 * struct prints - meaning of struct_prints
 * @w: data type
 * @p: pointer printy
 */

typedef struct prints
{
	char *w;
	void (*p)(va_list x);
} prints_f;

#endif
