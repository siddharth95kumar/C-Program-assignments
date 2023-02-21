//Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
void main()
{
    int a,sum=0;
    printf("Enter your number \n");
    scanf("%d",&a);
    sum = (a & 1) ? printf("Given number is %d, it is odd number\n",a): printf("Given number is %d, it is even number\n",a);

}
