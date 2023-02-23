#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of \ to be printed
 * Return: 0
 */
void print_diagonal(int n)
{
int i = 0, d;

while (i < n && n > 0)
{
d = 0;
while (d < i)
{
_putchar(' ');
d++;
}
_putchar('\\');
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
