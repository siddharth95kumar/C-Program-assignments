//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter your alphabet \n");
    scanf("%c",&ch);
    if(ch>64 && ch<91)
    {
        printf("Alphabet %c is a Upper case \n",ch);
    }
    else if(ch>96 && ch<123)
    {
        printf("Alphabet %c is a Lower case \n",ch);
    }
    else
    {
        printf("Other character \n");
    }

}
