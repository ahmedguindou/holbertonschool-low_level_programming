#include "main.h"
/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 *
 * This function prints the time in hours and minutes,
 * in the format HH:MM, for every minute in a 24-hour period.
 * It uses nested loops to iterate over hours and minutes,
 * and prints each minute on a new line.
 *
 * Return: void (does not return a value)
 */
void jack_bauer(void)
{
int h;
int m;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar('\n');
}
}
}
