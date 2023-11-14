#include "main.h"

/**
 * get_reverse_string - print string in reverse
 * @args: variable argument
 * Return: return number of characters printed
 */

int get_reverse_string(va_list args)
{
	char *str = va_arg(args, char *);
	int str_iterator, i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		i++;

		for (str_iterator = i - 1; str_iterator >= 0; str_iterator--)
		{
			_putchar(str[str_iterator]);
		}
	}
	return (i);
}
