#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
int i;
char *result = str;
char *leet_chars = "AaEeOoTtLl";
char *leet_codes = "44330771";

for (; *str != '\0'; str++)
{
for ( i = 0; i < 10; i++)
{
if (*str == leet_chars[i])
{
*str = leet_codes[i];
break;
}
}
}
return (result);
}

