/*
Write a menu driven program with the following options:
a. Addition b. Subtraction c. Multiplication d. Division e. Exit
*/
void main()
{
    while(1)
    {
    int a,b,c,choice;
    printf("**********************\n");
    printf("Enter your choice \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    printf("*********************\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter your 1st and 2nd number \n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Addition of %d and %d is %d\n\n",a,b,c);
        break;
    case 2:
        printf("Enter your 1st and 2nd number \n");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("Subtraction of %d and %d is %d\n\n",a,b,c);
        break;
    case 3:
        printf("Enter your 1st and 2nd number \n");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("Multiplication of %d and %d is %d\n\n",a,b,c);
        break;
    case 4:
        printf("Enter your 1st and 2nd number \n");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("Division of %d and %d is %d\n\n",a,b,c);
        break;
    case 5:exit(0);
        break;
    default:
        printf("Enter valid choice\n\n");
    }
    }

}
