#include "main.h"
#include <stdio.h>

/**
 * _printf - Custom implementation of the printf function
 * @format: Format string
 * @...: Optional arguments
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
int format_iterator = 0, length = 0;
int struct_iterator;
fs op[] = {{"%c", get_character},
{"%c", get_character},
{"%s", get_string},
{"%%", get_percent}};
va_list args;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
while (format[format_iterator] != '\0')
{
struct_iterator = 3;
while (struct_iterator > 0)
{
if (op[struct_iterator].op[0] == format[format_iterator] &&
op[struct_iterator].op[1] == format[format_iterator + 1])
{
length += op[struct_iterator].func(args);
format_iterator += 2;
}
struct_iterator--;
}
_putchar(format[format_iterator]);
format_iterator++;
length++;
}
va_end(args);
return (length);
}
