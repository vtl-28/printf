#include "main.h"
#include <string.h>

/**
 * get_HEX_two - function to convert to hexidecimal number
 * @value: number to convert
 * Return: return the number of characters printed
 */

int get_HEX_two(unsigned int value)
{
	int count = 0, iterator;
	int *hex_values;

	unsigned int value_copy = value;

	while (value / 16 != 0)
	{
		count++;
		value /= 16;
	}

	hex_values = malloc(sizeof(int) * count);

	if (hex_values == NULL)
		return (-1);

	for (iterator = 0; iterator < count; iterator++)
	{
		hex_values[iterator] = value_copy % 16;
		value_copy /= 16;
	}

	for (iterator = count - 1; iterator >= 0; iterator--)
	{
		if (hex_values[iterator] > 9)
			hex_values[iterator] = hex_values[iterator] + 7;

		_putchar(hex_values[iterator] + '0');
	}
	free(hex_values);
	return (count);
}

/**
 * get_hex_string - function to get Non printable characters
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int get_hex_string(va_list args)
{
	int iterator, length = 0;
	char *str;
	int value;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (iterator = 0; str[iterator] != '\0'; iterator++)
	{
		if (str[iterator] < 32 || str[iterator] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length += 2;
			value = str[iterator];

			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + get_HEX_two(value);
		}
		else
		{
			_putchar(str[iterator]);
			length++;
		}
	}
	return (length);
}
