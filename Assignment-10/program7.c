
#include<stdio.h>
void main()
{
    printf("Combination is = %d\n",comb(10,2));
}
int comb(int n,int r)
{
    return fact(n)/(fact(r) * fact(n-r));
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
