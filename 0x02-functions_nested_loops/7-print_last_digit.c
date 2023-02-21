#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: the number to get the last digit from
 *
 * Return: the last digit of the number
 */
int print_last_digit(int num)
{
int last_digit = num % 10;

if (last_digit < 0)
last_digit *= -1;

_putchar('0' + last_digit);

return last_digit;
}


