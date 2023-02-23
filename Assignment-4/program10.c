//Write a program to print a table of 5.

#include<stdio.h>
void main()
{
    int i,num=5;
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d \n",num,i,i*num);
    }
}
