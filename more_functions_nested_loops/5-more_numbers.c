#include "main.h"

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