#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 * Description: This function prints the numbers from 0 to 14,
 * ten times, followed by a new line. Each number is printed
 * without leading spaces and is followed by a newline character
 * after each complete set.
 */
void print_line(int n)
{
    char i;
    for(i = 0 ; i < n ; i++ ){
        _putchar('_');
    }
    _putchar('\n');
}