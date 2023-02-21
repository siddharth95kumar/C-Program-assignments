/*
 Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.
*/

#include<stdio.h>
void main()
{
    float rupees;
    printf("Enter your amount \n");
    scanf("%f",&rupees);
    rupees = rupees * 1/76.23;
    printf("Your converted amount is %f",rupees);


}
