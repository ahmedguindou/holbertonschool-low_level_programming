#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer whose absolute value is to be computed
 *
 * Description: This function returns the absolute (positive) value
 * of a given integer. If the integer is negative, it returns the
 * positive equivalent
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
if (n < 0)
{
return (-n);
}
return (n);
}
