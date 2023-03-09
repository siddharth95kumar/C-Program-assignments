/* Print this pattern
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=17;j++)
        {
            if((j>=10-(2*i-1)) && (j<=8+(2*i-1)) && (k))
            {
                printf("%c",ch);
                k=0;
                j<9?ch++:ch--;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
