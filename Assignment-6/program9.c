//Write a program to calculate LCM of two numbers

#include<stdio.h>
void main()
{
    int x,y,i;
    printf("Enter your number \n");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        {
            printf("LCM of %d and %d is %d",x,y,i);
            break;
        }
    }
}
