#include "main.h"
#include <string.h>

/**
 * get_octal - function to get an octal number
 * @args: variable arguments
 * Return: return the number of characters printed
 */

int get_octal(va_list args)
{
	int count = 0, iterator;
	int *octal_values;

	unsigned int number = va_arg(args, unsigned int);
	unsigned int number_copy = number;

	while (number / 8 != 0)
	{
		count++;
		number /= 8;
	}
	count++;

	octal_values = malloc(sizeof(int) * count);

	if (octal_values == NULL)
		return (-1);

	for (iterator = 0; iterator < count; iterator++)
	{
		octal_values[iterator] = number_copy % 8;
		number_copy /= 8;
	}

	for (iterator = count - 1; iterator >= 0; iterator--)
		_putchar(octal_values[iterator] + '0');

	free(octal_values);
	return (count);
}
