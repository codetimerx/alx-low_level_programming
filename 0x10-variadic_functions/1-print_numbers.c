#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints a list of integers separated by a given string
 * @separator: String to be printed between numbers
 * @n: Number of integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int number;

va_start(args, n);
for (i = 0; i < n; ++i)
{
number = va_arg(args, int);
printf("%d", number);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
