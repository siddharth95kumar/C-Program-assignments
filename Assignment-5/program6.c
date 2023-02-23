//Write a program to print the first N even natural numbers

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2==0)
        {
            printf("Even natural number is %d \n",i);
        }
    }
}
