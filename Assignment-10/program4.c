//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>

void natural(int n)
{
   int i;
   for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }

}
void main()
{
    int n;
    printf("Enter your number \n");
    scanf("%d",&n);
    natural(n);


}
