//TSRS
#include<stdio.h>
void main()
{
    if(check(2,123))
        printf("Yes\n\n");
    else
        printf("No");
}
int check(int digit ,int num)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num = num /10;
    }
    return 0;
}

