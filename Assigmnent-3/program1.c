//Write a program to check whether a given number is positive or non positive

#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number is %d, it is positive \n",num);
    }
    else if(num<0)
    {
        printf("Number is %d, it is negative \n",num);
    }
    else
        printf("Number is %d zero \n",num);


}
