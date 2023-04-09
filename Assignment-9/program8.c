/*Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.*/

#include <stdio.h>
void main()
{
    int num, abs_num;
    printf("Enter a number \n");
    scanf("%d", &num);
    switch(num >= 0)
    {
        case 1:
            abs_num = num;
            num = -abs_num;
            printf("The negative of %d is %d", abs_num, num);
            break;
        default:
            abs_num = -num;
            printf("The positive of %d is %d", num, abs_num);
    }
    return 0;
}
