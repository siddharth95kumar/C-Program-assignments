//Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter your number \n");
scanf("%d",&n);
for(i=1;i<=n*2;i++)
{
    if(i%2==0)
    {
        sum=sum+i;
    }
}
printf("Even natural number is %d \n",sum);
}
