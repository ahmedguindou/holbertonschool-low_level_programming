#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function takes a string and prints each character
 * in reverse order, followed by a new line.
 */
void print_rev(char *s)
{
int length = 0;
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
