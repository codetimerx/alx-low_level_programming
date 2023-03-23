#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints any combination of char, integer, float, and string
 * @format: List of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *f;
char cval;
int ival;
double dval;
char *sval;

va_start(args, format);

for (f = format; *f != '\0'; ++f)
{
if (*f == 'c')
{
cval = (char) va_arg(args, int);
printf("%c", cval);
}
else if (*f == 'i')
{
ival = va_arg(args, int);
printf("%d", ival);
}
else if (*f == 'f')
{
dval = va_arg(args, double);
printf("%f", dval);
}
else if (*f == 's')
{
sval = va_arg(args, char *);
if (sval == NULL)
{
printf("(nil)");
}
else
{
printf("%s", sval);
}
}
if (*(f + 1) != '\0' && (*f == 'c' || *f == 'i' || *f == 'f' || *f == 's'))
{
printf(", ");
}
}
va_end(args);
printf("\n");
}

