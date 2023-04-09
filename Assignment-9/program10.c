/* C program to find all roots of a quadratic equation using switch case*/
#include <stdio.h>
#include <math.h>

void main()
    {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    int choice;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (a == 0)
        {
        printf("Invalid input: a cannot be zero.\n");
        return 0;
        }

        printf("Enter your choice of finding roots:\n");
        printf("1. Real and distinct roots.\n");
        printf("2. Real and equal roots.\n");
        printf("3. Complex roots.\n");
        scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            if (discriminant > 0)
                {
                root1 = (-b + sqrt(discriminant)) / (2 * a);
                root2 = (-b - sqrt(discriminant)) / (2 * a);
                printf("Roots are: %.2f and %.2f\n", root1, root2);
                }
            else if (discriminant == 0)
                {
                root1 = root2 = -b / (2 * a);
                printf("Roots are: %.2f and %.2f\n", root1, root2);
                }
            else
                {
                realPart = -b / (2 * a);
                imagPart = sqrt(-discriminant) / (2 * a);
                printf("Roots are: %.2f+%.2fi and %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
                }
            break;

        case 2:
            if (discriminant >= 0)
                {
                root1 = root2 = -b / (2 * a);
                printf("Roots are: %.2f and %.2f\n", root1, root2);
                }
            else
                {
                realPart = -b / (2 * a);
                imagPart = sqrt(-discriminant) / (2 * a);
                printf("Roots are: %.2f+%.2fi and %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
                }
            break;

        case 3:
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are: %.2f+%.2fi and %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
            break;

        default:
            printf("Invalid choice.\n");
    }
}
