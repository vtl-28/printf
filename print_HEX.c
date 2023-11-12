#include "main.h"
#include <string.h>

/**
 * get_HEX - function to get an hexidecimal number
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int get_HEX(va_list args)
{
	int count = 0, iterator;
	int *hex_values;

	unsigned int number = va_arg(args, unsigned int);
	unsigned int number_copy = number;

	while (number / 16 != 0)
	{
		count++;
		number /= 16;
	}
	count++;

	hex_values = malloc(sizeof(int) * count);

	if (hex_values == NULL)
		return (-1);

	for (iterator = 0; iterator < count; iterator++)
	{
		hex_values[iterator] = number_copy % 16;
		number_copy /= 16;
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
