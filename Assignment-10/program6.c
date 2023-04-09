//6. Write a program to calculate the factorial of a number.(TSRS)
#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int n;
    printf("Enter your number \n");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial is %d \n\n",f);
}
