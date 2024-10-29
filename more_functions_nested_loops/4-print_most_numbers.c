#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4
 * Description: This function uses _putchar to print each number
 * from 0 to 9, skipping the numbers 2 and 4, followed by a newline.
 */
void print_most_numbers(void)
{
char num;
for (num = '0' ; num <= '9' ; num++)
{
if (num != '2' && num != '4')
{
_putchar(num);
}
}
_putchar('\n');
}
