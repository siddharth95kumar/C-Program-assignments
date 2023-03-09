//Write a program to calculate HCF of two numbers HCF=X * Y / LCM

#include<stdio.h>
void main()
{
    int i,x,y,HCF,LCM;
    printf("Enter two numbers \n");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        {
            LCM=i;
            break;
        }

    }
    HCF=x*y/LCM;
    printf("HCF is %d",HCF);
}


