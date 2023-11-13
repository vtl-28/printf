#include <stdio.h>
#include "main.h"

/**
 * get_HEX_three - function to convert an unsigned long int to
 * hexidecimal number
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
