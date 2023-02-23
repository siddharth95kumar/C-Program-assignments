//Write a program to reverse a given number

#include<stdio.h>
void main()
{
    int n,rem=0,rev=0;
    printf("Enter a number which you want to reverse \n");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }
    printf("Your reverse number is %d\n",rev);
}
