#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a newline using recursion.
 * @s: The string to be printed.
 * Description: This function takes a pointer to a string and prints each
 * character recursively until the end of the string. Once it reaches
 * the end, it prints a newline character.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
