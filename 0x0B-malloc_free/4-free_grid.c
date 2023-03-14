#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers
 * @grid: the 2D array of integers to free
 * @height: the height of the 2D array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

