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
