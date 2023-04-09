//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int even_odd(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    if(even_odd(num)==1)
    {
        printf("%d is even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
}
