#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * argstostr - concatenates all arguments of a program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, total_len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len = strlen(av[i]) + 1;
total_len += len;
}

str = malloc(sizeof(char) * total_len);
if (str == NULL)
return (NULL);

for (i = 0, j = 0; i < ac; i++)
{
len = strlen(av[i]);
memcpy(str + j, av[i], len);
j += len;
str[j++] = '\n';
}
str[j] = '\0';
return (str);
}

