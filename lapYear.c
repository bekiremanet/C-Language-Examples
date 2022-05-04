#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int day_of_year(int , int , int);
int lap_year(int);

int main()
{	
	printf("%d", day_of_year(29, 12, 2021));

    return 0;
}

int day_of_year(int day, int mon, int year)
{
    int i;
    
    for (i = 1; i < mon; i++)
    {
        if (i <= 7)
        {
            if (i == 2) 
            {
                day = day + 28 + lap_year(year);
            }
            else if (i % 2 == 0) 
            {
                day = day + 30;
            }
            else 
            {
                day = day + 31;
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                day = day + 31;
            }
            else
            {
                day = day + 30;
            }
        }

    }

    return day;
}

int lap_year(int year)
{
    if (year % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
