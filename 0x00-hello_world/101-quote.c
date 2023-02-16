#include <stdio.h>
#include<unistd.h>
/**
 * main - A program that prints a line using the printf function
 * Return: 0 (Success)
 */
int main(void)
{
char *message="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 39);
return (1);
}
