//Write a program to print the first N odd natural numbers in reverse order

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2==1)
        {
            printf("Odd natural number %d\n",i);
        }
    }
}
