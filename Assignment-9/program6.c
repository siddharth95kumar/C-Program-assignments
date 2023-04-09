/*Program to check whether a year is a leap year or not. Using switch statement*/
#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year \n");
    scanf("%d", &year);
    switch(year % 4)
    {
        case 0:
            if(year % 100 == 0)
                {
                    if(year % 400 == 0)
                    {
                        printf("%d is a leap year",year);
                    }
                    else
                    {
                        printf("%d is not a leap year",year);
                    }
                }
            else
                {
                    printf("%d is a leap year",year);
                }
                break;
        default:
                printf("%d is not a leap year",year);
    }
}

