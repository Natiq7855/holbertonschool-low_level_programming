#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
int row, col;
for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
_putchar(a[row][col]); /* Print each piece or space */
}
_putchar('\n'); /* New line after each row */
}
}
