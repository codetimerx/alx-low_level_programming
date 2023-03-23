#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of a variable number of integers.
 *
 * @n: The number of integers to sum.
 * @...: The integers to sum.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;

va_list args;

va_start(args, n);

for (i = 0; i < n; ++i)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}

