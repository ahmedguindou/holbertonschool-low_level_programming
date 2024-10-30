#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: If n is 0 or less, the function only prints a newline.
 */
void print_diagonal(int n)
{
char i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < n; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
