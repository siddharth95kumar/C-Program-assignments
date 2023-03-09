//Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
void main()
{
    int num,a=0,b=1,c=0,i;
    printf("Enter your number \n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %dth term of fibonacci is %d",num,b);
}

