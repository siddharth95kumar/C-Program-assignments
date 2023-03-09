//Write a program to print all Prime numbers between two given numbers

void main()
{
int i,n,flag,num1,num2,count=0;
printf("Enter 2 numbers \n");
scanf("%d %d",&num1,&num2);
for(n=num1;n<num2;n++)
{
    flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0 && n!=1)
    {
        count++;

        printf("Prime numbers betweeen %d to %d is = %d\n",num1,num2,n);

    }
}
}
