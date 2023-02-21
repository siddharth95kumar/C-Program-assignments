// Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)

#include<stdio.h>
void main()
{
    int number,digit;
    printf("Enter your number and digit \n");
    scanf("%d %d",&number,&digit);
    printf("You entered %d number and %d digit\n",number,digit);
    number = number * 10;
    number = number + digit;
    printf("Your number is %d\n",number);
}
