#include "main.h"
/**
 * print_remaining_days - takes a day and counts how many days
 * are left in the year conndidering a leap year
 * @month: Month in number form
 * @day: Date of the month
 * @year: Year
 */
void print_remaining_days(int month, int day, int year)
{
/*Checking for a leap year by dividing by 400, 100 or 4 evenly*/
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
			{
			if (month > 2 && day >= 60)
			{
			day++;
			}

			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);

			}

	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
