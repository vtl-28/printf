#include "main.h"
#include <string.h>

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
