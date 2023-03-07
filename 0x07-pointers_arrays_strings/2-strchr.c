#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate character in string
 *
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurrence of character, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}

