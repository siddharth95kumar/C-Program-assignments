/*Write a program which takes the day number of a week and displays a unique greeting message for the day.*/
void main()
{
    int choice;
    printf("Enter the number from 1 to 7\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Today is Sunday\n");
        break;
    case 2:
        printf("Today is Monday\n");
        break;
    case 3:
        printf("Today is Tuesday\n");
        break;
    case 4:
        printf("Today is Wednesday\n");
        break;
    case 5:
        printf("Today is Thursday\n");
        break;
    case 6:
        printf("Today is Friday\n");
        break;
    case 7:
        printf("Today is Saturday\n");
        break;
    default:
        printf("Enter valid choice\n");
    }
}

