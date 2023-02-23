//Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    if(num > 99 && num < 1000)
    {
        printf("%d is a 3 digit number \n",num);
    }
    else
    {
        printf("%d is not a 3 digit number \n",num);
    }
}
