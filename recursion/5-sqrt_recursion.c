#include "main.h"
/**
 * _sqrt_recursion_helper - Helper function to calculate square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 * Return: The square root if found, -1 otherwise.
 */
int _sqrt_recursion_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt_recursion_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The square root of n, or -1 if
 * it does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion_helper(n, 0));
}
