//Write a program to count digits in a given number

#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter your number \n");
    scanf("%d",&n);
    printf("Your digit is %d\n",n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits is %d \n",count);
}

