#include "main.h"
/**
 * print_square - Prints a square of a given size using the '#' character.
 * @size: The size of the square.
 *
 * Description: If size is 0 or less, the function prints only a newline.
 */
void print_square(int size)
{
char i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < size ; i++)
{
for (j = 0; j < size ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}