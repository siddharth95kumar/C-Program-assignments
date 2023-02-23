//Write a program to check whether a given number is divisible by 7 or divisible by 3

#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    if(num%7==0 && num%3==0)
    {
        printf("Your number is %d  and it is divisible by 7 and 3\n",num);
    }
    else
    {
        printf("Your number is %d and it is not divisible by 7 and 3\n",num);
    }
}
