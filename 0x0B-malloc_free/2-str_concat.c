#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to newly allocated space in memory with concatenated string
 * or NULL if malloc fails.
 */
char *str_concat(char *s1, char *s2)
{
size_t len1, len2, len;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
len = len1 + len2 + 1;
result = (char *) malloc(len  *sizeof(char));
if (result == NULL)
return (NULL);
strcpy(result, s1);
strcpy(result + len1, s2);
result[len - 1] = '\0';
return (result);
}
