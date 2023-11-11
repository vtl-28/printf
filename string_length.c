#include "main.h"
/**
 * string_length - Calculate the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int string_length(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
