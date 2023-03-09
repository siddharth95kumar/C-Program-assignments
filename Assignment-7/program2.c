//Write a program to print first 4 N terms of Fibonacci series

#include<stdio.h>
void main()
{
int fib1=0,fib2=1,fib3,num,count=0;
printf("Enter your number \n");
scanf("%d",&num);
printf("The first %d fibonacci number are ....\n",num);
printf("%d\n",fib1);
printf("%d\n",fib2);
count = 2;

while(count < num)
{
    fib3=fib1+fib2;
    count++;
    printf("%d\n",fib3);
    fib1=fib2;
    fib2=fib3;
}
}


