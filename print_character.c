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
