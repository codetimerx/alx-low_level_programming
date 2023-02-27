#include "main.h"
#include <stdio.h>
#include<math.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers are found
 */
int _atoi(char *s)
{
int sign = 1, result = 0, i = 0, power;
while (s[i] == ' ')
i++;
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
i++;
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
result *= sign;
if (result == 0)
{
_putchar('0');
}
else
{
if (result < 0)
{
_putchar('-');
result = -result;
}
power = 1;
while (power <= result / 10)
power *= 10;
while (power > 0)
{
_putchar(result / power + '0');
result %= power;
power /= 10;
}
}
_putchar('\n');
return (0);
}

