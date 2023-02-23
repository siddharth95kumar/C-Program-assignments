//Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
void main()
{
int num;
printf("Enter your number \n");
scanf("%d",&num);
if(num%5==0)
{
    printf("%d is divisible by 5 \n",num);
}
else
{
    printf("%d is not divisible by 5 \n",num);
}
}
