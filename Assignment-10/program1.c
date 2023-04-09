//Write a function to calculate area of circle.(TSRS)
#include<stdio.h>
float area(float);
float area(float radius)
{
    return 3.14 * radius * radius;
}
void main()
{
    int r=5;
    printf("Area = %f\n\n",area(r));
}
