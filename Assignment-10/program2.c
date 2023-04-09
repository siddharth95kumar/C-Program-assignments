//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simpleInterest(float p,float r,float t);
void main()
{
    float p,r,t,si;
    printf("Enter Principle,rate and time for simple interest \n");
    scanf("%f%f%f",&p,&r,&t);
    si=simpleInterest(p,r,t);
    printf("The simple interest is %f\n",si);
}
float simpleInterest(float p,float r,float t)
{
    float si;
    si=p*r*t/100;
    return si;
}

