#include "main.h"
#include <string.h>


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
