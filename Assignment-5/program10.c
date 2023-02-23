//Write a program to print a table of N.

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your table number \n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d  =  %d \n",n,i,n*i);
    }
}
