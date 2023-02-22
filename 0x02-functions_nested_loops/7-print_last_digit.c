#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The integer number to get the last digit from
 *
 * Return: The last digit of the number
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
_putchar(last_digit + '0'); 
return (last_digit);
}
