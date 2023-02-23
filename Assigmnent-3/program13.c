//Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    if(num%3==0 && num%2==0)
    {
        printf("Your number is %d  and it is divisible by 2 and 3 \n",num);
    }
    else
    {
        printf("Your number is %d and it is not divisible by 2 and 3\n",num);
    }
}
