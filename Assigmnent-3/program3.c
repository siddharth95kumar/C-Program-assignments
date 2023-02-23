//Write a program to check whether a given number is an even number or an odd number

#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is divisible by 2, it is even number \n",num);
    }
    else
    {
        printf("%d is not divisible by 2, it is odd number \n",num);
    }
}
