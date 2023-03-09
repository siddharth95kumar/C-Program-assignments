//Write a program to find the position of first 1 in LSB.

#include<stdio.h>
void main()
{
    int n;
    printf("Enter your number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n&1==1)
        {
            printf("%d",n);
            break;
        }
        n=n>>1;
    }
}

