#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

typedef struct printer
{
	char *spec;
	int (*run)(va_list);
} printer;

printer _get_printer(const char *spec);
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list);
int _print_str(va_list);
int _print_decimal(va_list);
int _print_int(va_list);

#endif
