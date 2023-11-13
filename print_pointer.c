#include "main.h"

/**
 * get_p - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */

int get_p(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int c;
	int i;
	int z;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	c = (unsigned long int)p;
	_putchar('0');
	_putchar('c');
	z = get_HEX_three(c);
	return (z + 2);
}
