#include "main.h"
/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}

while (*src != '\0')
{
*ptr++ = *src++;
}

*ptr = '\0';
return (dest);
}

