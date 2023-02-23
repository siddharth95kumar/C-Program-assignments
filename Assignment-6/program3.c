//Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2==1)
    {
        sum=sum+i;
    }
    }
    printf("Sum of odd natural number is %d \n",sum);
}
