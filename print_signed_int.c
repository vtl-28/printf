#include "main.h"
#include <string.h>


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
