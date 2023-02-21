//Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>
void main()
{
    int num, sum=0;
    printf("Enter 3 digit number only \n");
    scanf("%d",&num);
    printf("Your entered 3 digit number %d\n",num);
    {
    sum=num%10;
    num=num/10;
    sum=num%10+sum;
    num=num/10;
    sum=num%10+sum;
    }
    printf("The sum of digit is %d \n",sum);
}
