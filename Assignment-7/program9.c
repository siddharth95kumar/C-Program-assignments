//Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
void main()
{
    int n,rem,sum=0,c;
    printf("Enter your number \n");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum + rem*rem*rem;
        n=n/10;
    }
    if(c==sum)
        printf("Armstrong \n");
    else
        printf("Not Armstrong \n");
}
