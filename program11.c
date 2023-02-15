#include<stdio.h>
void main()
{
    int hour,minute;
    printf("Enter your time \n");
    scanf("%d:%d",&hour,&minute);
    printf("%d:%d converted to %d Hour and %d Minute",hour,minute,hour,minute);
}
