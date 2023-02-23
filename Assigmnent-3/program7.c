//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, real_part, imag_part;

    printf("Enter coefficients a, b, and c: \n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        real_part = -b / (2*a);
        imag_part = sqrt(-discriminant) / (2*a);
        printf("Roots are imaginary.\n");
        printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", real_part, imag_part, real_part, imag_part);
    }

    return 0;
}

