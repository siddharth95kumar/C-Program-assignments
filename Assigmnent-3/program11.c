//Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>
void main()
{
    float s1,s2,s3,s4,s5;
    float marks;
    printf("Enter your marks \n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    marks=(s1+s2+s3+s4+s5)/5 ;
    if(marks>32)
    {
       printf("You passed the examination \n");
    }
    else
    {
        printf("You failed the examination \n");
    }
}
