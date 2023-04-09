/*
Convert the following if-else-if construct into switch case:
if(var == 1) printf("good");
else if(var == 2) printf("better");
else if(var == 3) printf("best");
else printf("invalid");
*/

#include<stdio.h>
void main()
{
    int choice;
    printf("Enter your choice from 1 to 3 only \n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("good\n");
        break;
    case 2:
        printf("better\n");
        break;
    case 3:
        printf("best\n");
        break;
    default:
        printf("invalid\n");
    }
}
