#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * This function prints a 10x10 multiplication table from 0 to 9,
 * formatted with proper alignment, where each number is separated
 * by a comma and space.
 *
 * Return: void
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
result = i * j;
if (j == 0)
{
_putchar(result + '0');
}
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
{
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
}
}
_putchar('$');
_putchar('\n');
}
}
