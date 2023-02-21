//Write a program to print unit digit of a given number

#include<stdio.h>
void main()
{
    int a;
    printf("Enter your number \n");
    scanf("%d",&a);
    printf("Your given number is %d\n",a);
    a=a%10;
    printf("The unit digit of a is %d\n",a);
}
