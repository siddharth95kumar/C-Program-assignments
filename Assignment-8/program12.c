/* Print this pattern
A B C D C B A
  A B C B A
    A B A
      A
*/
#include<stdio.h>
void main()
{
    int i,j;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",ch);
                j<4?ch++:ch--;
            }
            else
            {
               printf(" ");

            }
        }
        printf("\n");
    }

}
