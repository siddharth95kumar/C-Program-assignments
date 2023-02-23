//Write a program to calculate factorial of a number

#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact * i;
    }
    printf("Factorial %d is %d \n",n,fact);
}
