//Write a program to print cubes of the first N natural numbers

#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Your number is %d and it's cube is %d \n",i,i*i*i);
    }
}
