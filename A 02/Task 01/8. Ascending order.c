#include<stdio.h>

main()
{
    int n,n1,n2,n3,t,temp;
    printf("How many times: ");
    scanf("%d",&n);

    for(t=1;t<=n;t++)
    {
        printf("Enter three number: ");
        scanf("%d%d%d",&n1,&n2,&n3);

        if(n2>n1&&n2>n3)
        {
            if(n1>n3)
            {
                temp=n2;
                n2=n1;
                n1=temp;
            }
            else
            {
                temp=n2;
                n2=n3;
                n3=n1;
                n1=temp;
            }
        }

        else if(n3>n1)
        {
            if(n1>n2)
            {
            temp=n3;
            n3=n2;
            n2=n1;
            n1=temp;
            }
            else
            {
            temp=n3;
            n3=n1;
            n1=temp;
            }
        }

        else
        {
            if(n2>n3)
            {
            n1=n1;
            n2=n2;
            n3=n3;
            }
            else
            {
               temp=n2;
               n2=n3;
               n3=temp;
            }
        }
        printf("Sequence: %d %d %d \n",n3,n2,n1);

    }

    return 0;
}
