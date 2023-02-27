#include "main.h"
/**
 * _strcpy - copies string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0(true)
 */
char *_strcpy(char *dest, char *src)
{
int y;

for (y = 0; src[y] != '\0'; y++)
dest[y] = src[y];
dest[y] = '\0';
return (dest);
}
