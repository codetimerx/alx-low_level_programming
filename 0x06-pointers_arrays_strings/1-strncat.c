#include "main.h"
/**
 * _strncat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}

while (n-- > 0 && *src != '\0')
{
*ptr++ = *src++;
}

*ptr = '\0';
return (dest);
}

