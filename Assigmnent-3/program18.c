//Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
void main()
{
    int month;
printf("Enter your month number \n");
scanf("%d",&month);
if(month==1)
{
    printf("January has 31 days \n");
}
else if(month==2)
{
    printf("February has 28/29 days \n");
}
else if(month==3)
{
    printf("March has 31 days \n");
}
else if(month==4)
{
    printf("April has 30 days \n");
}
else if(month==5)
{
    printf("May has 31 days \n");
}
else if(month==6)
{
    printf("June has 30 days \n");
}
else if(month==7)
{
    printf("July has 31 days \n");
}
else if(month==8)
{
    printf("August has 31 days \n");
}
else if(month==9)
{
    printf("September has 30 days \n");
}
else if(month==10)
{
    printf("October has 31 days \n");
}
else if(month==11)
{
    printf("November has 30 days \n");
}
else if(month==12)
{
    printf("December has 31 days \n");
}
else
{
   printf("Please enter a valid month \n");
}
}
