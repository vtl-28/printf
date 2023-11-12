#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_character - function to print a character
 * @args: variable arguments
 * Return: return the number of characters printed
 */
int get_character(va_list args)
{
	char character;

	character = va_arg(args, int);
	_putchar(character);
	return (1);
}

/**
 * get_string - function to print a string
 * @args: variable arguments
 * Return: return the number of characters printed
 */
int get_string(va_list args)
{
	int string_iterator;
	char *str;
	int str_length;

	str = va_arg(args, char *);

	if (str == NULL)
{
		str = "(nil)";
			str_length = string_length(str);
	for (string_iterator = 0; string_iterator < str_length;
	string_iterator++)
{
	_putchar(str[string_iterator]);
}
	return (str_length);
}
	else
{
	str_length = string_length(str);

	for (string_iterator = 0; string_iterator < str_length;
		string_iterator++) {
	_putchar(str[string_iterator]);
}
	return (str_length);
}
}

/**
 * get_percent - prints the char %.
 * Return: 1.
 */
int get_percent(void)
{
	int percent_asci_value = 37;

	_putchar(percent_asci_value);
	return (1);
}


/**
 * get_signed_int - function to get a signed integer
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int get_signed_int(va_list args)
{
	int signed_int = va_arg(args, int);
	int num, last_number = signed_int % 10, digit, exponent = 1;
	int iterator = 1;

	signed_int /= 10;
	num = signed_int;

	if (last_number < 0)
	{
		_putchar('-');
		signed_int = -signed_int;
		num = -num;
		last_number = -last_number;
		iterator++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exponent *= 10;
			 num /= 10;
		}
		num = signed_int;

		while (exponent > 0)
		{
			digit  = num / exponent;
			_putchar(digit + '0');
			num = num - (digit * exponent);
			exponent /= 10;
			iterator++;
		}
	}
	_putchar(last_number + '0');
	return (iterator);
}

/**
 * get_unsigned_int - function to get an unsigned integer
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int get_unsigned_int(va_list args)
{
	int unsigned_int = va_arg(args, int);

	int num, last_number = unsigned_int % 10, digit, exponent = 1;
	int iterator = 1;

	unsigned_int /= 10;
	num = unsigned_int;

	if (last_number < 0)
	{
		_putchar('-');
		unsigned_int = -unsigned_int;
		num = -num;
		last_number = -last_number;
		iterator++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exponent *= 10;
			num /= 10;
		}
		num = unsigned_int;

		while (exponent > 0)
		{
			digit  = num / exponent;
			_putchar(digit + '0');
			num = num - (digit * exponent);
			exponent /= 10;
			iterator++;
		}
	}
	_putchar(last_number + '0');
	return (iterator);
}

/**
*print_bin_conv - prints binary conversion
*@val: parameter
*Return: returns an integer
*/


int print_bin_conv(va_list val)
{
	int flag = 0;
	int conv_counter = 0;
	int i, a = 1, b;
	unsigned int p;

	unsigned int num = va_arg(val, unsigned int);

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			conv_counter++;
		}
	}
	if (conv_counter == 0)
	{
		conv_counter++;
		_putchar('0');
	}
	return (conv_counter);
}

/**
 * get_p - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */

int get_p(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int c;
	int i;
	int z;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
	return (i);
	}
	c = (unsigned long int)p;
	_putchar('0');
	_putchar('c');
	z = get_HEX_three(c);
	return (z + 2);
}

/**
 * get_HEX_extra - function to convert to hexidecimal number
 * @value: number to convert
 * Return: return the number of characters printed
 */
int get_HEX_three(unsigned long int value)
{
	long int count = 0, iterator;
	long int *hex_values;

	unsigned long int value_copy = value;

	while (value / 16 != 0)
	{
		count++;
		value /= 16;
	}
	count++;

	hex_values = malloc(sizeof(long int) * count);
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
