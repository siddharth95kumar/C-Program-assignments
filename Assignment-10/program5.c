//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    odd_natural(num);
    printf("Odd natural number is %d \n",num);
}
void odd_natural(int num)
{
    int i;
    for(i=1;i<=num*2;i=i+2)
    {
        printf("%d ",i);
    }
    printf("\n");
}
