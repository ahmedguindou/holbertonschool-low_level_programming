#include "main.h"
/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
