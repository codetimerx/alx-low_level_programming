#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *str)
{
int i, len = strlen(str);
for (i = 0; i < len; i++)
{
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}
}
return (str);
}

