//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>
void main()
{
int num;
printf("Enter your number \n");
scanf("%d",&num);
printf("You entered %d \n",num);
num = num/10;
num = num*10;
printf("Your number is %d\n",num);
}
