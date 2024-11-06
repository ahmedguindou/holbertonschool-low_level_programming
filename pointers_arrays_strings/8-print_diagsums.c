#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the first element of the square matrix (as a 1D array).
 * @size: The size of the matrix (number of rows/columns).
 * This function computes and prints the sum of the primary diagonal
 * (top-left to bottom-right)
 * and the secondary diagonal (top-right to bottom-left)
 * of a square matrix. The matrix is passed as a pointer to its first element,
 * and the size of the matrix is given by the parameter `size`.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
