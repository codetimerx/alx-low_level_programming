#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to memory area
 * @b: Constant byte to fill memory with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
{
*ptr++ = b;
}

return s;
}

