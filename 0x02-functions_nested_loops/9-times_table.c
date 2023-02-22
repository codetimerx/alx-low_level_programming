#include "main.h"

/**
 * times_table - prints a multiplication table for the digits 0-9                     
 */

void times_table(void)
{
int i, j;

for (i = 0; i < 10; i++)
{   
for (j = 0; j < 10; j++)
{
_putchar(i + '0');
_putchar(',');
_putchar(j + '0');
_putchar(' ');
}
_putchar('\n');
}
}

