//Write a program to check whether a given number is a Prime number or not

void main()
{
    int i,n,f=0;
    printf("Enter your number \n");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }

    }
    if(f==0)
        {
            printf("Prime number \n");
        }
        else
        {
            printf("Not prime \n");
        }
}

