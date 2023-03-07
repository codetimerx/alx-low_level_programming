#include "main.h"
/**
 * print_chessboard - Prints the contents of a 2D character array
 *                    as a chessboard.
 *
 * @a: The 2D character array to print.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
_putchar(' ');
}
_putchar('\n');
}
}

