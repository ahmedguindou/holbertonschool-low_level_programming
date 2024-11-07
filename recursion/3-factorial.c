#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial for.
 * Return: The factorial of n, or -1 if n is negative.
 * Description: This function calculates the factorial of a non-negative
 * integer using recursion. If n is less than 0, it returns -1 to indicate
 * an error, as factorial is not defined for negative numbers.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
