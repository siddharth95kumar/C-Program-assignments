//Write a program which takes a character as an input and displays its ASCII code

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter your character \n");
    scanf("%c",&ch);
    printf("Your entered %c and it's ASCII value is %d\n",ch,ch);
}
