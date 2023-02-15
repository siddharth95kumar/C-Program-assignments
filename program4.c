//WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.


#include<stdio.h>
void main()
{
    float A,R;
    printf("Enter the radius : ");
    scanf("%f",&R);
    A = 3.14 * R * R;
    printf("Area of circle is %f having radius %f \n",A,R);
}

