#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse, followed by a newline
 *
 * @s: pointer to the string to be reversed and printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}

