/*Write a program to check whether a given number is an even number or an odd number without using % operator.*/

#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    if(num&1)
    {
        printf("%d it is odd number \n",num);
    }
    else
    {
        printf("%d it is even number \n",num);
    }
}
