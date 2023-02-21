#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number whose last digit is to be printed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
int last_digit = num % 10;

_putchar(last_digit + '0');

return last_digit;
}

