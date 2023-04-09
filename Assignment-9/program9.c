/*Program to Convert even number into its upper nearest odd number Switch Statement.*/

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number  \n");
    scanf("%d", &num);
    switch(num % 2 ==0)
    {
        case 1:
            printf("The upper nearest odd is %d\n",num+1);
            break;
        case 0:
            printf("%d",num);
    }

}
