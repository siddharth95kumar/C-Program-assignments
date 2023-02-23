//Write a program to calculate sum of first N natural numbers

#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter your number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
printf("The sum of first natural number is %d \n",sum);
}
}
