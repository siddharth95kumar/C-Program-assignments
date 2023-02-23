//Write a program to print squares of the first N natural numbers

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Square of natural numbers is %d is %d \n",i,i*i);
    }
}
