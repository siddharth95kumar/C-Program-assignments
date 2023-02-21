//Write a program to print a given number without its last digit.

#include<stdio.h>
void main()
{
    int a;
    printf("Enter your number \n");
    scanf("%d",&a);
    printf("Your given number is %d\n",a);
    a=a/10;
    printf("Last digit removed and the value is %d\n",a);
}
