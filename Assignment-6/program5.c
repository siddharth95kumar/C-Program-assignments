//Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=i*i*i + sum;
    }
    printf("Sum of cubes is %d \n",sum);
}
