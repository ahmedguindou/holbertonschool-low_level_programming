#include "main.h"
/**
 * print_chessboard - Prints a chessboard.
 * @a: A pointer to a 2D array (8x8) representing the chessboard.
 * This function prints the chessboard, row by row, where each square
 * is represented by a character. After each row, a newline is printed.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0 ; i < 8 ; i++)
{
for (j = 0 ; j < 8 ; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
