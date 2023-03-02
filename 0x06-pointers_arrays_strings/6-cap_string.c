#include <ctype.h>
#include "main.h"
/**
 * cap_string - Capitalizes the first letter of every word in a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int capitalize_next = 1;
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (capitalize_next && !isspace(str[i]))
{
str[i] = toupper(str[i]);
capitalize_next = 0;
}
if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
str[i] == ')' || str[i] == '{' || str[i] == '}')
{
capitalize_next = 1;
}
}
return (str);
}

