/*Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>
void main()
{
    float cp,sp,profit_loss;
    printf("Enter the cost price and selling price \n");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
    profit_loss=(sp - cp) / cp * 100;
    printf("Your profit is %.2f \n",profit_loss);
    }
    else if(cp>sp)
    {
    profit_loss=(cp - sp) / cp * 100;
    printf("Your loss is %.2f \n",profit_loss);
    }
    else
    {
        printf("No profit no loss \n");
    }
}
