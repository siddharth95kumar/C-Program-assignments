//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

void main()
{
    char ch;
    printf("Enter your alphabet \n");
    scanf("%c",&ch);
    if(ch>64 && ch<91)
    {
        printf("%c It is Upper case \n",ch);
    }
    else if(ch>96 && ch<123)
    {
        printf("%c It is Lower case \n",ch);
    }
    else if(ch>47 && ch<58)
    {
        printf("%c It is Numbers \n",ch);
    }
    else
    {
        printf("%c It is Other symbols \n",ch);
    }
}
