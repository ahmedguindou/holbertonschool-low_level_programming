#include "main.h"
/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints each character of a string
 * to the standard output, followed by a new line.
 */
void _puts(char *str)
{
while (*str != ('\0'))
{
_putchar(*str);
str++;
}
_putchar('\n');
}
