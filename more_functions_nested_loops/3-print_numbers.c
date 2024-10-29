#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line
 *
 * Description: This function uses _putchar to print each number 
 * from 0 to 9, followed by a newline character.
 */
void print_numbers(void)
{
char num;
for (num = '0' ; num <= '9' ; num++)
{
_putchar(num);
}
_putchar('\n');
}
