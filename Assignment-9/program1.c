/*Write a program which takes the month number as an input and display number of days in that month.*/
void main()
{
    while(1)
    {
    int month;
    printf("Enter your month 1 to 12 \n");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("January it has 31 days \n");
        break;
    case 2:
        printf("February it has 28/29 days \n");
        break;
    case 3:
        printf("March it has 31 days \n");
        break;
    case 4:
        printf("April it has 30 days \n");
        break;
    case 5:
        printf("May it has 31 days \n");
        break;
    case 6:
        printf("June it has 30 days \n");
        break;
    case 7:
        printf("July it has 31 days \n");
        break;
    case 8:
        printf("August it has 31 days \n");
        break;
    case 9:
        printf("September it has 30 days \n");
        break;
    case 10:
        printf("October it has 31 days \n");
        break;
    case 11:
        printf("November it has 30 days \n");
        break;
    case 12:
        printf("December it has 31 days \n");
        break;
    default:
        printf("Enter valid number \n");
        break;
    }
    }
}
