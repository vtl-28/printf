#include "main.h"
#include <string.h>

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
