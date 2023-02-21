/*
Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.
*/

#include<stdio.h>
void main()
{
    int num,rem=0;
    printf("Enter three digit number \n");
    scanf("%d",&num);
    rem=num%10;
    num=num/10;
    rem = rem * 100 + num;

    printf("Your number is %d",rem);

}
