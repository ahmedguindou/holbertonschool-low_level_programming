#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
while (*s != '\0' && (*s < '0' || *s > '9'))
{
if (*s == '-')
{
sign *= -1;
}
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (result  *sign);
}
