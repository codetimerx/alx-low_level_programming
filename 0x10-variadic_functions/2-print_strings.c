#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints a list of strings separated by a given string
 * @separator: String to be printed between strings
 * @n: Number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *string;

va_start(args, n);
for (i = 0; i < n; ++i)
{
string = va_arg(args, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);

printf("\n");
}

