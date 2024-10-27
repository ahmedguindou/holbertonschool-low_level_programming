#include "main.h"

/**
 * _isalpha - checks for a lowercase character.
 * @c: The character to check (as an integer).
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
