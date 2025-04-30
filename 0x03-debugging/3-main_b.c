#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 02;
    day = 12;
    year = 2019;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 02;
    day = 29;
    year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 02;
    day = 29;
    year = 2001;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 03;
    day = 01;
    year = 2009;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 03;
    day = 01;
    year = 2008;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);

    month = 12;
    day = 31;
    year = 4000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);
    return (0);
}
