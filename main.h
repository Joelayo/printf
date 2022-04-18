#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct types_arguments - Struct op
 *
 * @t: The operator
 * @f: The function associated
 */
typedef struct types_arguments
{
	char t;
	int (*f)(va_list va);
} types;

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(va_list va);

#endif
