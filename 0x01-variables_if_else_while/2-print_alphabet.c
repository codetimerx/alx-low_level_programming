#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';

do {
putchar(c);
c++;
} while (c <= 'z');

putchar('\n');

return (0);
}

