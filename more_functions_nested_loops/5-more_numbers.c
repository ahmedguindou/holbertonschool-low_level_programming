#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 * Description: This function prints the numbers from 0 to 14,
 * ten times, followed by a new line. Each number is printed
 * without leading spaces and is followed by a newline character
 * after each complete set.
 */
void more_numbers(void)
{
char count, num;
for (count = 0 ; count < 10 ; count++)
{
for (num = 0 ; num <= 14 ; num++)
{
if (num >= 10)
{
_putchar('1');
}
_putchar(num % 10 + '0');
}
_putchar('\n');
}
}
