#include "main.h"
#include <stdio.h>

/**
 * _printf - function that produces output according to a format.
 * @format: string to be printed in a certain format
 * Return: return number of characters printed
 */

int _printf(const char *format, ...)
{
	int format_iterator = 0, length = 0, struct_iterator;

	fs op[] = {
		{"%c", get_character}
	};

	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[format_iterator] != '\0')
	{
		struct_iterator = 0;

		while (struct_iterator > -1)
		{
			if (format[format_iterator] == '%' &&
			    (format[format_iterator + 1]
			     != op[struct_iterator].op[1]))
				return (-1);

			if (op[struct_iterator].op[0] == format[format_iterator]
			    && op[struct_iterator].op[1]
			     == format[format_iterator + 1])
			{
				length += op[struct_iterator].func(args);
				format_iterator = format_iterator + 2;
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
