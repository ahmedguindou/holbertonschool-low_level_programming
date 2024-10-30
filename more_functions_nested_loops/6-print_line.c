#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: If n is 0 or less, the function should only print a new line.
 */
void print_line(int n)
{
char i;
for (i = 0 ; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
