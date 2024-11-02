#include "main.h"
/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints each character of a string
 * to the standard output, followed by a new line.
 */
void print_rev(char *s)
{
int length =0;
int i;
while (s[length] != ('\0'))
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
