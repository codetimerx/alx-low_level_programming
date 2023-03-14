#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 *           contains a copy of the string given as a parameter
 * @str: The input string to be duplicated.
 *
 * Return: On success, a pointer to the duplicated string. NULL if
 * insufficient memory was available or if str == NULL.
 */
char *_strdup(char *str)
{
char *copy;
size_t len;

if (str == NULL)
{
return (NULL);
}

len = strlen(str) + 1;

copy = malloc(len *sizeof(char));

if (copy != NULL)
{
memcpy(copy, str, len);
}

return (copy);
}
