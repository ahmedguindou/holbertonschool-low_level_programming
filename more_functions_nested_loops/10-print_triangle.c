#include "main.h"
/**
 * print_triangle - Prints a right-aligned triangle using the '#' character.
 * @size: The size (height) of the triangle.
 *
 * Description: If size is 0 or less, the function prints only a newline.
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
