//Write a program to print the first N odd natural numbers

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your number \n");
    scanf("%d",&n);

    for(i=0;i<=n*2;i++)
        if(i%2==1)
    {
        printf("Your odd natural number is = %d \n",i);
    }
}
