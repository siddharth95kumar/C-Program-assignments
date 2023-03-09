//Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>
void main()
{
    int i,x,y,LCM,HCF;
    printf("Enter your number \n");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x*y;i++)
        {
            if(i%x==0 && i%y==0)
            {
                LCM=i;
                break;
            }
        }
       HCF=x*y/LCM;
    if(HCF==1)
       {
           printf("co-prime %d %d",x,y);
       }
    else
       {
           printf("Not a co-prime %d %d",x,y);
       }
}
