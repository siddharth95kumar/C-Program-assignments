/*Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.*/

#include<stdio.h>
void main()
{
    int num1, num2, num3, greatest;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    greatest = num1;            // Assuming num1 is the greatest initially
    if (num2 > greatest)        // Check if num2 is greater than num1
        {
        greatest = num2;
        }
    if (num3 > greatest)        // Check if num3 is greater than num1 and num2
        {
        greatest = num3;
        }
    printf("%d is greatest\n",greatest);
    if (num1 == greatest && num2 == greatest && num3 == greatest)
        {
        printf("%d appears three times\n", greatest);
        }
    else if ((num1 == greatest && num2 == greatest) || (num1 == greatest && num3 == greatest) || (num2 == greatest && num3 == greatest))
        {
        printf("%d appears two times\n", greatest);
        }
}
