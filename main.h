#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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
	int print_bin_conv(va_list val);
	int get_unsigned_u(va_list args);
	int get_octal(va_list args);
	int get_hex(va_list args);
	int get_HEX(va_list args);
	int get_hex_string(va_list args);
	int get_HEX_two(unsigned int value);
	int get_p(va_list val);
	int get_HEX_three(unsigned long int value);
#endif
