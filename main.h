#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct format_specifier - Struct format_specifier
 *
 * @op: The operator
 * @func: The function associated with the operator
 */
typedef struct format_specifier
{
	char *op;
	int (*func)();
} fs;

int _printf(const char *format, ...);
int _putchar(char c);
int get_character(va_list);
int string_length(char *s);
int get_string(va_list);
int get_percent(void);
int get_signed_int(va_list args);
int get_unsigned_int(va_list args);
#endif
