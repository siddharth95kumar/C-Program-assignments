//Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your number \n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf("%d \n",i);
    }
}
