//Write a program to swap values of two int variables

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    printf("Before swapping the values %d and %d\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("After swapping the values %d and %d\n",a,b);
}
