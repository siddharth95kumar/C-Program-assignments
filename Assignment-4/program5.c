//Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
void main()
{
    int i;
    for(i=20;i>=0;i--)
    {
    if(i%2==1)
    {
      printf("%d \n",i);
    }
    }
}
