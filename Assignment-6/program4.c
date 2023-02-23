//Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=i*i + sum;
    }
    printf("Sum of natural number square is %d \n",sum);
}
