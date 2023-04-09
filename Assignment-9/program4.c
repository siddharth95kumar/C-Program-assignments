/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
*/

#include <stdio.h>
void main()
{
    while(1)
    {
    int choice,a, b, c;;
    printf("Enter your choice from 1 to 4 only \n");
    printf("1. Check for isoceles triangle \n");
    printf("2. Check for right angle triangle \n");
    printf("3. Check for equilateral triangle \n");
    printf("4. Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter three sides of the triangle: \n\n");
        scanf("%d %d %d", &a, &b, &c);
        if (a == b || b == c || a == c)
            {
                printf("The given sides form an isosceles triangle.\n");
            }
        else
            {
                printf("The given sides do not form an isosceles triangle.\n");
            }
        break;

    case 2:
        printf("Enter the three sides of a triangle: \n\n");
        scanf("%d %d %d", &a, &b, &c);
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            {
                printf("The given set of numbers are lengths of sides of a right-angled triangle.\n");
            }
        else
            {
            printf("The given set of numbers are not lengths of sides of a right-angled triangle.\n");
            }
        break;

    case 3:
        printf("Enter the lengths of the sides of the triangle: \n\n");
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && b == c)
            {
                printf("The triangle is equilateral.\n");
            }
        else
            {
                printf("The triangle is not equilateral.\n");
            }
    case 4:

        exit(0);
        break;
    default:
        printf("Enter valid number \n");
    }
    }
    }


