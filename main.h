#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct format_specifier {
  char *op;
  int (*func)(va_list args);
} fs;

int _printf(const char *format, ...);
int _putchar(char c);
int get_character(va_list);

#endif
