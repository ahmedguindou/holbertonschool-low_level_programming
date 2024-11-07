#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 * Description: This function recursively counts the number of characters
 * in the string until it reaches the null terminator (`'\0'`), and then
 * returns the total count.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
