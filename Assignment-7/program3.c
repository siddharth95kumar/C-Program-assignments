//Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
    int num, prev=0, curr=1, next=1;
    printf("Enter a number  \n");
    scanf("%d", &num);
    while(next<num)
        {
        prev = curr;
        curr = next;
        next = prev + curr;
        }
    if(next == num)
        {
        printf("%d is a part of the Fibonacci series.\n", num);
        }
    else
        {
        printf("%d is not a part of the Fibonacci series.\n", num);
        }
    return 0;
}
