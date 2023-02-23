#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int is_leap_year = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
int day_of_year = 0;
int i;


for (i = 0; i < month - 1; i++)
{
day_of_year += days_in_month[i];
}
day_of_year += day;


if (is_leap_year && month > 2)
{
day_of_year++;
}

printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", (is_leap_year ? 366 : 365) - day_of_year);
}

