#include <stdio.h>

void main()
{
    float side1, side2, side3;

    printf("Enter the lengths of three sides of a triangle: \n");
    scanf("%f %f %f", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2))
        {
        printf("The triangle is valid \n");
        }
     else
        {
        printf("The triangle is not valid \n");
        }

}


