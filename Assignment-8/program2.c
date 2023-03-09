/* Print this pattern

    *
   **
  ***
 ****
*****

*/
#include<stdio.h>
void main()
{
    int i,j,count;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
