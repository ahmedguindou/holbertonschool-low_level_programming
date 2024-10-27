#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer whose last digit is to be printed.
 *
 * Description: This function computes the last digit of the integer
 * provided as input and prints it. It returns the last digit as an
 * integer.
 *
 * Return: The last digit of the number.
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar (last_digit + '0');
return (last_digit);
}
