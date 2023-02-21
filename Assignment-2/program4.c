// Write a program to swap values of two int variables without using a third variable

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two values \n");
    scanf("%d %d",&a,&b);
    printf("Before swapping the values of a is %d and b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the values of a is %d and b is %d\n",a,b);
}
